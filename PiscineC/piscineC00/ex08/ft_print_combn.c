/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:01:47 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/16 14:10:56 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rec(char numbers[], int pos, int n, char c)
{
	char	copy_numbers[9];
	int		index;

	if (pos == n)
		return ;
	index = -1;
	while (++index < pos)
		copy_numbers[index] = numbers[index];
	copy_numbers[pos] = c;
	while (copy_numbers[pos] <= '9')
	{
		if (pos == n - 1)
		{
			write(1, &copy_numbers, n);
			if (copy_numbers[0] != '9' - n + 1)
				write(1, ", ", 2);
		}
		else
			ft_print_rec(copy_numbers, pos + 1, n, copy_numbers[pos] + 1);
		copy_numbers[pos]++;
	}
}

void	ft_print_combn(int n)
{
	char	numbers[9];

	ft_print_rec(numbers, 0, n, '0');
}
