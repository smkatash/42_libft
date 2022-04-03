/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:25:10 by ktashbae          #+#    #+#             */
/*   Updated: 2022/03/28 15:45:10 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (n > 0 && p[i] != '\0')
	{
		p[i] = '\0';
		i++;
		n--;
	}
}

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
