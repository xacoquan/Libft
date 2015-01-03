/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:16:51 by xacoquan          #+#    #+#             */
/*   Updated: 2014/11/12 15:03:46 by xacoquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_oddprev(char const *s, int i, char c)
{
	int		nb;

	nb = 0;
	while (i >= 0 && s[i] == c)
	{
		nb++;
		i--;
	}
	return (nb % 2);
}

int		ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j && ((ft_isspace(s[i]) && !ft_oddprev(s, i - 1, '\\'))
				|| (s[i] == '\\' && s[i + 1] == '\n')
				|| (s[i] == '\n' && ft_oddprev(s, i - 1, '\\'))))
		i++;
	while (j >= i && ((ft_isspace(s[j]) && !ft_oddprev(s, j - 1, '\\'))
				|| (s[j] == '\\' && s[j + 1] == '\n')
				|| (s[j] == '\n' && ft_oddprev(s, j - 1, '\\'))))
		j--;
	if (j < i)
		j = i - 1;
	new = ft_strsub(s, i, j - i + 1);
	return (new);
}
