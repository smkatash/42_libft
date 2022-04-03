/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:19:04 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/02 09:16:43 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*buf;

	i = 0;
	p = (char *)s;
	buf = 0;
	while (p[i])
	{
		if (p[i] == (unsigned char)c)
		{
			buf = &p[i];
		}
		i++;
	}
	if (c == 0)
	{
		return (&p[i]);
	}
	return (buf);
}
