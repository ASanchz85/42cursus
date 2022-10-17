/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:33:41 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/24 21:07:28 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rec(unsigned int backup)
{
	if (backup >= 10)
	{
		ft_rec(backup / 10);
		backup = backup % 10;
	}
	backup = backup + '0';
	write(1, &backup, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	backup;

	if (nb < 0)
	{
		backup = -nb;
		write(1, "-", 1);
	}
	else
		backup = nb;
	ft_rec(backup);
}
