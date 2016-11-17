/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 01:00:18 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/15 17:43:38 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i_d;
	int		i_s;

	if (ft_strlen(dst)  > (size -1))
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

int	main(void)
{
	char *src = "thx to ntoniolo for this test !";
	char dst[4] = "";
	char *src2 = "";
	char dst2[4] = "";

	printf("%d\n",ft_strlen(dst));
	printf("%lu\n",ft_strlcat(dst, src, 4));
	printf("%s\n",dst);
	printf("%lu\n",strlcat(dst2, src2, 4));
	printf("%s\n",dst2);
}
