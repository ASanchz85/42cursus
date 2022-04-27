/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:46:14 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/24 21:46:25 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned long	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ((unsigned int)ft_strlen(s)))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (0);
	while (i < len)
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
