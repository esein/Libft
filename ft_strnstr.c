/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:11:03 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/24 06:07:18 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_b;
	size_t	i_l;
	size_t	tmp;

	i_b = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i_b])
	{
		if (big[i_b] == little[0])
		{
			tmp = i_b;
			i_l = 0;
			while ((little[i_l] == big[i_b]) && (i_b <= len))
			{
				i_b++;
				i_l++;
				if (little[i_l] == '\0' || i_l == len)
					return ((char *)big + i_b - i_l);
			}
			i_b = tmp;
		}
		i_b++;
	}
	return (0);
}
