/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 03:28:01 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/08 23:12:11 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			i;
	unsigned int	j;

	i = ft_strlen(s);
	new = ft_strnew(i);
	j = 0;
	while (s[j] != '\0')
	{
		new[j] = f(j, s[j]);
		j++;
	}
	return (new);
}
