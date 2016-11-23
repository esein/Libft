/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 20:30:41 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/23 22:10:04 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	is;
	size_t	in;
	size_t	lens1;
	size_t	lens2;
	char	*new;

	is = 0;
	in = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(new = malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return (0);
	while (is < lens1)
	{
		new[in] = s1[is];
		is++;
		in++;
	}
	is = 0;
	while (is < lens2)
	{
		new[in] = s2[is];
		is++;
		in++;
	}
	new[in] = '\0';
	return (new);
}
