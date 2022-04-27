/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:08:00 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 23:14:36 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i] != '\0') && s1[i] == s2[i] && (i < (n - 1)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
