/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:51:21 by gcadiou           #+#    #+#             */
/*   Updated: 2016/08/17 00:24:08 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
