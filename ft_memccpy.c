/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 06:39:43 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/17 18:47:01 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*buffdest;
	const char	*buffsrc;
	size_t		i;

	buffsrc = src;
	buffdest = dest;
	i = 0;
	while (n != 0)
	{
		buffdest[i] = buffsrc[i];
		if (buffdest[i] == c)
		{
			i++;
			return (buffdest + i);
		}
		buffdest[i] = buffsrc[i];
		i++;
		n--;
	}
	return (NULL);
}
