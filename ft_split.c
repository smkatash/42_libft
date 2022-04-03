/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:52:31 by ktashbae          #+#    #+#             */
/*   Updated: 2022/04/02 07:25:57 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

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
	arr_p = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!arr_p)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		ptr = malloc(ft_strlen_c(&s[i], c) + 1);
		if (!ptr)
			return (ft_free(arr_p, p));
		arr_p[p] = ft_strlcpy_f(ptr, &s[i], c);
		p++;
		i += ft_strlen_c(&s[i], c);
	}
	arr_p[p] = 0;
	return (arr_p);
}

// int	main(void)
// {
// 	int i;

// 	printf("\nTest de ft_split :\n");
// 	char **res;
// 	printf("Chaine s : 'bonjour a tous', separateur c : ' ', resultat :\n");
// 	res = ft_split("bonjour a tous", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// 	printf("Chaine s : ' bonjour a tous ', separateur c : ' ', resultat :\n");
// 	res = ft_split(" bonjour a tous ", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// 	printf("Chaine s : '   ', separateur c : ' ', resultat :\n");
// 	res = ft_split("   ", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// 	printf("Chaine s : ' d  ', separateur c : ' ', resultat :\n");
// 	res = ft_split(" d  ", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// 	printf("Chaine s : 'nosep', separateur c : ' ', resultat :\n");
// 	res = ft_split("nosep", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// }