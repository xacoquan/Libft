/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 08:58:18 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:50:39 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = s1[i];
	return (dest);
}
