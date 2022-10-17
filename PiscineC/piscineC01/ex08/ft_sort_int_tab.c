/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:39:04 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/17 08:30:26 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{	
		j = i + 1;
		if (tab[i] > tab[j])
		{
			ft_swap(tab + i, tab + j);
			i = 0;
		}
		else
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
