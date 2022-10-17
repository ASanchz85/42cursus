/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:23:57 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/27 17:48:54 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	valor;
	int	total;

	valor = 1;
	total = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			valor = -valor;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (total * valor);
}
