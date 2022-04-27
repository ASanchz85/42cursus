/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:13:13 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/24 22:08:29 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		length;
	int		count;
	char	*copy;

	if (!s1 || !set)
		return (0);
	i = 0;
	count = 0;
	length = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[length] && ft_strrchr(set, s1[length]) && length >= i)
		length--;
	copy = malloc(sizeof(char) * ((length - i) + 2));
	if (!copy)
		return (0);
	ft_strlcpy(copy, &s1[i], (length + 2) - i);
	return (copy);
}
