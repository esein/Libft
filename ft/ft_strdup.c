/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:14:30 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/05 01:10:52 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count] != 0)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src) * ft_strlen(src) + 1);
	return (ft_strcpy(dest, src));
}
