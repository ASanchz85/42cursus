/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:46:40 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/25 18:56:51 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countlines(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			count++;
	}
	return (count);
}

static char	**ft_development(char **copy, char const *s, char c, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	start;

	i = -1;
	j = 0;
	while (++i < n)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j])
			j++;
		copy[i] = ft_substr(s, start, (j - start));
		if (!copy[i])
		{
			while (i >= 0)
				free(copy[i--]);
			free(copy);
			return (0);
		}
	}
	copy[i] = NULL;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	size_t	total_lines;

	if (!s)
		return (0);
	total_lines = ft_countlines(s, c);
	copy = ft_calloc(total_lines + 1, sizeof(char *));
	if (!copy)
		return (0);
	ft_development(copy, s, c, total_lines);
	return (copy);
}
