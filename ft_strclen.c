/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:44:02 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/12 15:07:40 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strclen(const char *s, char c)
{
	size_t	res;

	res = 0;
	if (!s || !*s)
		return (res);
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}
