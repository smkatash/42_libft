/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:43:00 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/03 16:17:20 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*str;

	i = 0;
	dest = (char *)dst;
	str = (char *)src;
	while (n > i && (dst || str))
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
