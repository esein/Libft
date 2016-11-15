# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 05:23:59 by gcadiou           #+#    #+#              #
#    Updated: 2016/11/15 11:20:23 by gcadiou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft*.c

all: compil.o lib.a

compil.o:
	gcc -c $(SRC) -I ./

lib.a:
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm *o

fclean: clean
	rm $(NAME)

re: fclean all
