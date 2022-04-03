/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:52:31 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/03 18:36:59 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strlcpy_f(char *dst, const char *src, const char c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int	ft_word_count(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_free(char **arr, size_t p)
{
	size_t	i;

	i = 0;
	while (i < p)
	{
		free (arr[i]);
		i++;
	}
	free (arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	p;
	char	**arr_p;
	char	*ptr;

	i = 0;
	p = 0;
	if (!s)
		return (NULL);
	arr_p = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!arr_p)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i])
		{
			ptr = malloc(ft_strlen_c(&s[i], c) + 1);
			if (!ptr)
				return (ft_free(arr_p, p));
			arr_p[p] = ft_strlcpy_f(ptr, &s[i], c);
			p++;
			i += ft_strlen_c(&s[i], c);
		}
	}
	return (arr_p);
}
