/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:25:30 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/06 12:43:15 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		if (s2[j] == '\0')
			return ((char*)&s1[i - j + 1]);
		i++;
	}
	return (NULL);
}
