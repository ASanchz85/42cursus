/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:51:21 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/27 23:05:17 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_repeated(char *origin, int max_pos, char letter_to_compare)
{
	int	i;

	i = -1;
	while (++i < max_pos)
	{
		if (origin[i] == letter_to_compare)
			return (1);
	}
	return (0);
}

void	ft_rec(int backup, int total_base, char *base)
{
	if (backup >= total_base)
	{
		ft_rec(backup / total_base, total_base, base);
		backup = backup % total_base;
	}
	write(1, &base[backup], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;
	int	backup;
	int	i;

	i = 0;
	length = ft_length(base);
	if (length <= 1)
		return ;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		if (ft_repeated(base, i, base[i]))
			return ;
		i++;
	}
	if (nbr < 0)
		backup = -nbr;
	else
		backup = nbr;
	ft_rec(backup, length, base);
}
