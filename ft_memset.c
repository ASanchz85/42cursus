/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:55:47 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 22:42:15 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long int	i;
	char				*str;
	unsigned char		casted;

	str = (char *)b;
	casted = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = casted;
		i++;
	}
	return (b);
}
