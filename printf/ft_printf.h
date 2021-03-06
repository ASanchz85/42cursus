/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:13:25 by ansanche          #+#    #+#             */
/*   Updated: 2022/05/07 20:01:00 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_recursive_nbr(unsigned long int backup);
int	ft_write_nbr(long int nbr);
int	ft_hexa_recursive(unsigned long long int hexa_nbr, char *base);
int	ft_hexa(unsigned long long hexa, char str);
int	ft_printf(char const *str, ...);

#endif
