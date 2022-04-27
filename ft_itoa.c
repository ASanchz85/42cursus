/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:57:17 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/24 21:20:19 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_length(long int nb, int sign)
{
	unsigned int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	if (sign == -1)
		count++;
	return (count);
}

static void	ft_calculate(char *copy, long int nb, unsigned int count, int sign)
{
	copy[count] = '\0';
	while (nb > 0)
	{
		copy[--count] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign == -1)
		copy[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*copy;
	unsigned int	count;
	long int		nb;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		nb = (long int)n * -1;
		sign = -1;
	}
	else
		nb = n;
	count = ft_length(nb, sign);
	copy = malloc((count + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_calculate(copy, nb, count, sign);
	if (count == 1 && n == 0)
		copy[0] = '0';
	return (copy);
}
