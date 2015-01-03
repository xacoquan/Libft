/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 06:59:12 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:21:08 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char	*buff;

	buff = (unsigned char *)malloc(sizeof(unsigned char) * len);
	if (buff == NULL)
		return (NULL);
	ft_memcpy(buff, s2, len);
	ft_memcpy(s1, buff, len);
	free(buff);
	return (s1);
}
