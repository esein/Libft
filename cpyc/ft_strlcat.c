/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 01:00:18 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/18 15:53:34 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst,const char *src, size_t size)
{
	size_t	i_d;
	size_t	i_s;
	size_t	lendst;

	i_s = 0;
	lendst = strlen(dst);
	i_d = lendst;
	if (strlen(dst) < size)
	{
		while (i_d < size - 1)
		{
			dst[i_d] = src[i_s];
			i_d++;
			i_s++;
		}
		dst[i_d] = '\0';
		return (strlen(src) + lendst);
	}
	else
		return (strlen(src) + size);
}
