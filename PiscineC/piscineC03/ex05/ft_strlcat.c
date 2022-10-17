/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:33:05 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/24 00:32:08 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_dest;
	unsigned int	total_src;

	total_dest = ft_length(dest);
	total_src = ft_length(src);
	i = total_dest;
	j = 0;
	if (size < 1)
		return (total_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < total_dest)
		return (total_src + size);
	else
		return (total_dest + total_src);
}
