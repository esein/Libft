# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 05:23:59 by gcadiou           #+#    #+#              #
#    Updated: 2016/11/15 12:00:00 by gcadiou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/

all: compil.o lib.a

compil.o:
	gcc -c $(SRC)*.c -I ./

lib.a:
	ar rc $(NAME) ./*.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
