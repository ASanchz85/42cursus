/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:27:51 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/17 08:31:27 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1 - i)
	{
		ft_swap(tab + i, tab + size - 1 - i);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	wildcard;

	wildcard = *a;
	*a = *b;
	*b = wildcard;
}
