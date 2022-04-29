/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_aux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:52:52 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/29 20:13:03 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_recursive_nbr(unsigned long int backup)
{
	int	count;

	count = 0;
	if (backup >= 10)
	{
		count += ft_recursive_nbr(backup / 10);
		backup %= 10;
	}
	backup = backup + '0';
	write(1, &backup, 1);
	return (count);
}

int	ft_write_nbr(long int nbr)
{
	unsigned long int	backup;
	int					count;

	count = 0;
	if (nbr < 0)
	{
		backup = -nbr;
		write(1, "-", 1);
		count++;
	}
	else
		backup = nbr;
	count += ft_recursive_nbr(backup);
	return (count);
}

int	ft_hexa_recursive(unsigned long long int hexa_nbr, char *hexa_nbr)
{
	int	count;

	count = 0;
	if (hexa_nbr >= 16)
	{
		count += ft_hexa_recursive(hexa_nbr / 16);
		hexa_nbr %= 16;
	}
	write(1, &base[backup - 1], 1);
	return (count);
}

int	ft_hexa(long long int hexa, char str)
{
	int		count;
	char	base_minus[16];
	char	base_mayus[16];

	count = 0;
	base_minus = "0123456789abcdef";
	base_mayus = "0123456789ABCDEF";
	if (str == 'p')
	{
		write(1, "0x", 2);
		count += 2;
		count += ft_hexa_recursive(hexa_nbr, base_minus);
	}
	if (str == 'x')
		count += ft_hexa_recursive(hexa_nbr, base_minus);
	if (str == 'X')
		count += ft_hexa_recursive(hexa_nbr, base_mayus);
	return (count);
}
