/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:00:13 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/22 22:31:09 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	*(dest + i) = '\0';
	i = 0;
	while (*(src + i) != '\0')
		i++;
	return (i);
}
