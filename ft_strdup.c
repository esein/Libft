/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:14:30 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/23 21:59:43 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = (char *) malloc(sizeof(*src) * ft_strlen(src) + 1)))
		return (NULL);
	return (ft_strcpy(dest, src));
}
