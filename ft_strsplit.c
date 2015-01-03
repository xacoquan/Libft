/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:09:25 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/23 20:01:12 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"
#include <stdlib.h>
#include <stddef.h>

static int			ft_analyzer(const char *s, char c)
{
	unsigned int	res;

	res = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			res++;
		}
	}
	return (res);
}

char				**ft_strsplit(const char *s, char c)
{
	char			**res;
	int				size;
	int				it;

	it = 0;
	size = ft_analyzer(s, c);
	res = (char**)malloc(sizeof(char*) * size + 1);
	if (!res || !s)
		return (NULL);
	while (it < size)
	{
		while (*s && *s == c)
			s++;
		res[it] = ft_strsub(s, 0, ft_strclen(s, c));
		if (!res[it])
			return (NULL);
		while (*s && *s != c)
			s++;
		it++;
	}
	return (res);
}
