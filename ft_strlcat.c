/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:21:01 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:12:02 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lendst;
	size_t		lensrc;
	size_t		tot;
	size_t		i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	tot = lensrc + lendst;
	if (size >= lendst)
	{
		while (lendst < (size - 1))
		{
			dst[lendst] = src[i];
			lendst++;
			i++;
		}
		dst[lendst] = '\0';
		return (tot);
	}
	return (size + lensrc);
}
