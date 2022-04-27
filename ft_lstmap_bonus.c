/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:02:25 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/22 22:27:52 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*backup;
	t_list	*new;
	void	*content;

	if (!f)
		return (NULL);
	backup = NULL;
	while (lst)
	{
		content = (*f)(lst -> content);
		if (content)
		{
			new = ft_lstnew(content);
			if (!new)
			{
				if (del)
					del(content);
				ft_lstclear(&backup, del);
				return (NULL);
			}
			ft_lstadd_back(&backup, new);
			lst = lst -> next;
		}
	}
	return (backup);
}
