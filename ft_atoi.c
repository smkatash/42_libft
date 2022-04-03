/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:41:10 by ktashbae          #+#    #+#             */
/*   Updated: 2022/03/28 15:13:39 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_isspace(char *p)
{
	int	i;

	i = 0;
	while (p[i] == ' ' || p[i] == '\n' || p[i] == '\t' || p[i] == '\v'
		|| p[i] == '\f' || p[i] == '\r')
	{
		i++;
	}
	return (p + i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		neg;
	char	*p;

	i = 0;
	neg = 1;
	num = 0;
	p = (char *)str;
	p = ft_isspace(p);
	if (p[i] == '-' || p[i] == '+')
	{
		if (p[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (p[i] >= '0' && p[i] <= '9')
	{
		num = (num * 10) + (p[i] - '0');
		i++;
	}
	return (num * neg);
}
