/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 00:25:02 by gcadiou           #+#    #+#             */
/*   Updated: 2016/08/17 01:47:01 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		count;
	int		vs1;
	int		vs2;

	vs1 = 0;
	vs2 = 0;
	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
