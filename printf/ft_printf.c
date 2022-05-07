/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:58:16 by ansanche          #+#    #+#             */
/*   Updated: 2022/05/07 20:11:54 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_write(unsigned char str)
{
	write(1, &str, 1);
	return (1);
}

static int	ft_write_str(char *str)
{
	int	i;

	i = 0;
	if (!str || str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	ft_conditions(char str, va_list ap)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_write(va_arg(ap, int));
	if (str == 's')
		count += ft_write_str(va_arg(ap, char *));
	if (str == 'p')
		count += ft_hexa((unsigned long long)va_arg(ap, void *), str);
	if (str == 'd' || str == 'i')
		count += ft_write_nbr(va_arg(ap, int));
	if (str == 'u')
		count += ft_write_nbr(va_arg(ap, unsigned int));
	if (str == 'x' || str == 'X')
		count += ft_hexa(va_arg(ap, unsigned int), str);
	if (str == '%')
	{
		write(1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_conditions(str[i + 1], ap);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
