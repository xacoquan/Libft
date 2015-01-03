/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 03:29:42 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/10 17:21:46 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		if ((ft_strncmp(s1, s2, n) == 0))
			return (1);
	}
	return (0);
}
