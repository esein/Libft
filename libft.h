/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:25:10 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/15 09:04:11 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_atoi(char *str);

char	*ft_strcat(char *dest, char *src);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src);

char	*ft_strncat(char *dest, char *src, int nb);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strstr(char *str, char *to_find);

void	*ft_memset(void *s, int c, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strnstr(char *big, char *little, size_t len);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

#endif
