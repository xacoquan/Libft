/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:49:23 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/10 17:25:00 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && i < n))
		i++;
	if (i > 0 && s1[i - 1] == s2[i - 1] && (i == n || (s1[i] == s2[i])))
		return (0);
	return (s1[i] - s2[i]);
}
