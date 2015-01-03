/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:06:56 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/09 02:26:09 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*dest;

	dest = s1;
	while (*s2 != '\0' && n > 0)
	{
		*dest = *s2;
		dest++;
		s2++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (s1);
}
