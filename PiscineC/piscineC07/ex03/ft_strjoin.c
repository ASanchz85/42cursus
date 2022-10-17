/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:29:34 by ansanche          #+#    #+#             */
/*   Updated: 2022/03/03 21:04:32 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_length_total(char **str, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		total += ft_length(str[i]);
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*total;
	int		length;
	int		i;

	if (size <= 0 || !sep || !strs)
	{
		total = malloc(sizeof(char));
		total[0] = 0;
		return (total);
	}
	length = ft_length(sep) * (size - 1) + ft_length_total(strs, size) + 1;
	total = malloc(sizeof(char) * length);
	if (!total)
		return (0);
	total[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(total, strs[i++]);
		if (i < size)
			ft_strcat(total, sep);
	}
	total[length - 1] = '\0';
	return (total);
}
