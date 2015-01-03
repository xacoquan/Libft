/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 08:34:58 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/12 15:14:00 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff1;

	buff1 = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*buff1 == (unsigned char)c)
			return ((void*)buff1);
		buff1++;
		i++;
	}
	return (NULL);
}
