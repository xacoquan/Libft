/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 06:38:08 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/06 13:17:12 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src;

	i = 0;
	dst = s1;
	src = s2;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
