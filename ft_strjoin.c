/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:07:35 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/12 15:06:50 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strcat(ft_strcat(res, s1), s2);
	return (res);
}
