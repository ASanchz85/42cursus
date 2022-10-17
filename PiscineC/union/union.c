/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:50:43 by ansanche          #+#    #+#             */
/*   Updated: 2022/03/02 22:18:11 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_repeated(char *origin, int max_pos, char letter_to_compare)
{
	int	i;

	i = -1;
	while (++i < max_pos)
	{
		if (origin[i] == letter_to_compare)
			return (0);
	}
	return (1);
}

int	ft_repeated2(char *origin, char letter_to_compare)
{
	int	i;

	i = 0;
	while (origin[i] != '\0')
	{
		if (origin[i] == letter_to_compare)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
				if (ft_repeated(argv[1], i, argv[1][i]))
					write(1, &argv[1][i], 1);
				i++;
		}
			i = 0;
		while (argv[2][i] != '\0')
		{
			if (ft_repeated2(argv[1], argv[2][i]))
				if (ft_repeated(argv[2], i, argv[2][i]))
					write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
