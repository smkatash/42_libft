/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:25:10 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/03 16:05:41 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	t_size;
	void	*p;

	t_size = count * size;
	p = malloc(t_size);
	if (p == 0)
	{
		return (0);
	}
	ft_bzero(p, t_size);
	return (p);
}
