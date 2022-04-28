/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_aux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:49:24 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/28 23:20:24 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_recursive_nbr(unsigned long long int backup)
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
	return (count + 1);
}

int	ft_write_nbr(long long int nbr)
{
	unsigned long long int	backup;
	int						count;

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

int	ft_hexa_ptr(unsigned long long int ptr)
{
	int	count;

	count = 0;

	return (count);
}

int	ft_hexa(unsigned int, char str)
{
	int	count;

	count = 0;

	return (count);
}
