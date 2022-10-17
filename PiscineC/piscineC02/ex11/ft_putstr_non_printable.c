/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:46:48 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/23 19:21:22 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		hex_1;
	int		hex_2;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			hex_1 = str[i] / 16;
			write(1, &hex[hex_1], 1);
			hex_2 = str[i] % 16;
			write(1, &hex[hex_2], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
