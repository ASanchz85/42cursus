/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:36:54 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 23:03:03 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((char *)s1)[i] == ((char *)s2)[i] && (i < (n - 1)))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
