/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:40 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 20:53:13 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive(unsigned int backup, int fd)
{
	if (backup >= 10)
	{
		ft_recursive(backup / 10, fd);
		backup %= 10;
	}
	backup = backup + '0';
	write(fd, &backup, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	backup;

	if (n < 0)
	{
		backup = -n;
		write(fd, "-", 1);
	}
	else
		backup = n;
	ft_recursive(backup, fd);
}
