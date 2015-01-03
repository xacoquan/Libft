/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 06:33:16 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/06 15:08:59 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t				i;
	unsigned char		*chg;

	chg = b;
	i = 0;
	while (i < n)
	{
		chg[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
