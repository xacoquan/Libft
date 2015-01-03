/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:16:37 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/09 16:57:10 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	new = malloc(sizeof(void*) * size);
	if (new == NULL || size == 0)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
