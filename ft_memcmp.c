/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 08:41:17 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/09 14:15:38 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	return (0);
}
