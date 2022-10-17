/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:17:08 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/13 00:46:15 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	y = 0;
	while (y++ < height)
	{
		x = 0;
		while (x++ < width)
		{
			if ((x < 2 && y < 2) || (x == 1 && y == height))
				ft_putchar('A');
			else if (x > 1 && x < width && y > 1 && y < height)
				ft_putchar(' ');
			else if ((x == width && y == 1) || (x == width && y == height))
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
