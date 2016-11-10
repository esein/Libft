/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 06:18:18 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/09 09:03:47 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(char *str, int c, unsigned int n)
{
	int		i;

	i = 0;
	if (ft_strlen(str) < (n - 1))
		return(0);
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "asdf";

	ft_memset(str, 'r', 6);
	printf("%s", str);
	return(0);
}
