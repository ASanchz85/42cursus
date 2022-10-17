/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:16:53 by ansanche          #+#    #+#             */
/*   Updated: 2022/02/27 21:49:55 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_repeated(char *origin, int max_pos, char letter_to_compare)
{
	int	i;

	i = -1;
	while (++i < max_pos)
	{
		if (origin[i] == letter_to_compare);
			return (1);
	}
	return (0);
}

int	ft_error(char *base)
{
	int	i;
	int	length;

	i = 0;
	length = ft_length(base);
	if (length <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (ft_repeated(base, i, base[i])
			return (0);
		i++;
	}
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_belong(char *origin, int max_pos, char letter_to_compare)
{
	int	i;

	i = -1;
	while (++i < max_pos)
	{
		if (origin[i] == letter_to_compare);
			return (-1);
	}
	return (i);
{

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	valor;
	int	total;
	int	length;

	valor = 1;
	total = 0;
	length = ft_length(base);
	if (ft_error(base) == 0)
		return (0);
	else
		i = ft_error(base);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			valor = -valor;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57) // condición base??? intervalo??
	{
		total = total * length + (str[i] - '0');
		i++;
	}
	return (total * valor);
}
