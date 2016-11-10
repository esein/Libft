/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 08:28:07 by gcadiou           #+#    #+#             */
/*   Updated: 2016/08/17 08:44:07 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		count;
	int		count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
		count++;
	while (count2 < nb)
	{
		dest[count + count2] = src[count2];
		count2++;
	}
	dest[count + count2] = '\0';
	return (dest);
}
