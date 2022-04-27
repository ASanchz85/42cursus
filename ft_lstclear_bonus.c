/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:44:30 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 22:28:40 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*backup;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		backup = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = backup;
	}
	*lst = NULL;
}
