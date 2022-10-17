/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:46:20 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/14 12:57:24 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
		write(1, "789", 3);
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{	
		b = a + 1;
		while (b <= '8')
		{
			if (b != a)
			{
				c = b + 1;
				while (c <= '9')
				{
					if (c != b && c != a)
						ft_write(a, b, c);
					c++;
				}
			}
			b++;
		}
		a++;
	}
}
