/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:55:41 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/24 21:26:39 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	tab = (void *)malloc((count * size) * sizeof(void));
	if (tab == NULL)
		return (0);
	else
		ft_bzero(tab, count * size);
	return (tab);
}
