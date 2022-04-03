/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:56:45 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/03 14:19:09 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*node;

	node = ft_lstnew(f(lst->content));
	if (!node)
		return (NULL);
	n_list = node;
	lst = lst->next;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&n_list, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&n_list, node);
	}
	return (n_list);
}
