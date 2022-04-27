/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 23:17:32 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/25 20:54:30 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						sign;
	int						i;
	unsigned long long int	total;

	i = 0;
	total = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = total * 10 + (unsigned long long int)(str[i] - '0');
		if (total >= 9223372036854775807 && sign == 1)
			return (-1);
		if (total > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (total * sign);
}
