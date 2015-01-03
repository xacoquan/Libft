/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:13:36 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/23 20:14:00 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "includes/libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		str2;
	int		sign;

	sign = 1;
	i = 0;
	str2 = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
		str2 = (str2 * 10) + (str[i++] - 48);
	return (sign * str2);
}
