/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 03:26:58 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:12:08 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	new = ft_strnew(i);
	j = 0;
	while (s[j] != '\0')
	{
		new[j] = f(s[j]);
		j++;
	}
	return (new);
}
