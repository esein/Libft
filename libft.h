/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:25:10 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/10 07:22:16 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
