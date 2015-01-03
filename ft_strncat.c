/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:21:10 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:12:15 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	j = 0;
	i = ft_strlen(s1);
	while ((s2[j] != '\0') && (j < n))
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
