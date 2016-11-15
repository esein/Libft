/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 01:00:18 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/10 07:23:16 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i_d;
	int		i_s;

	if (ft_strlen(dst)  > size)
		return (ft_strlen((char *)src) + size);
	i_d = ft_strlen(dst);
	i_s = 0;
	while (src[i_s] && (i_s < (size + 1 - ft_strlen(dst))))
	{
		dst[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	return (ft_strlen(dst) + ft_strlen((char *)src));
}
