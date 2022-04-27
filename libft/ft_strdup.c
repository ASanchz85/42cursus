/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:51:52 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/02 20:30:07 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned long	length;
	unsigned long	i;

	i = 0;
	length = ft_strlen(s1);
	if (!s1)
		return (0);
	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (0);
	else
	{
		while (i < length)
		{
			copy[i] = s1[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
