/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:44:12 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/10 09:16:27 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		tmp;

	tmp = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			tmp = i;
		i++;
	}
	if (tmp != 0)
		return ((char *) &s[tmp]);
	else
		return (0);
}
