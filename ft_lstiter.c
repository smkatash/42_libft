/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:39:55 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/03 10:55:14 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;
	t_list	*nxt_tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		nxt_tmp = tmp->next;
		f(tmp->content);
		tmp = nxt_tmp;
	}
}
