/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:39:19 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/19 12:06:44 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	test2(int *sign, int *n)
{
	*sign = -1;
	*n = -*n;
}

int		ft_count(int n)
{
	int		count;

	count = 1;
	if (n < 0)
		count = 2;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*io;
	int		len;
	int		sign;

	sign = 1;
	len = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		test2(&sign, &n);
	io = ft_strnew(len);
	if (io)
	{
		while (len > 0)
		{
			io[len - 1] = (n % 10) + '0';
			n /= 10;
			len--;
		}
		if (sign < 0)
			io[0] = '-';
	}
	return (io);
}
