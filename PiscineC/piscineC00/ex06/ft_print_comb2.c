/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:09:08 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/15 16:59:34 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_write_exchange(int block_a, int block_b);

void	ft_print_comb2(void)
{
	int	block_a;
	int	block_b;

	block_a = 0;
	while (block_a <= 98)
	{	
		block_b = block_a + 1;
		while (block_b <= 99)
		{
			ft_write_exchange(block_a, block_b);
			block_b++;
		}
		block_a++;
	}
}

void	ft_write_exchange(int block_a, int block_b)
{
	char	num_a1;
	char	num_a2;
	char	num_b1;
	char	num_b2;

	num_a1 = block_a / 10 + '0';
	num_a2 = block_a % 10 + '0';
	num_b1 = block_b / 10 + '0';
	num_b2 = block_b % 10 + '0';
	if ((num_a1 == '9' && num_a2 == '8') && (num_b1 == '9' && num_b2 == '9'))
		write(1, "98 99", 5);
	else
	{
		write(1, &num_a1, 1);
		write(1, &num_a2, 1);
		write(1, " ", 1);
		write(1, &num_b1, 1);
		write(1, &num_b2, 1);
		write(1, ", ", 2);
	}
}
