/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:11:03 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/10 09:49:10 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(char *big, char *little, size_t len)
{
	int		i_b;
	int		i_l;
	int		tmp;

	i_b = 0;
	while (big[i_b])
	{
		if (big[i_b] == little[0])
		{
			tmp = i_b;
			i_l = 0;
			while (little[i_l] == big[i_b])
			{
				i_b++;
				i_l++;
				if (little[i_l] == '\0' || i_l == len)
					return (big + i_b - i_l);
			}
			i_b = tmp;
		}
		i_b++;
	}
	return (0);
}
