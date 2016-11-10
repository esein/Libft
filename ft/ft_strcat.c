/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:32:11 by gcadiou           #+#    #+#             */
/*   Updated: 2016/08/17 08:21:35 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count;
	int		count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
		count++;
	while (src[count2] != '\0')
	{
		dest[count + count2] = src[count2];
		count2++;
	}
	dest[count + count2] = '\0';
	return (dest);
}
