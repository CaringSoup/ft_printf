# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gferreir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 08:26:17 by gferreir          #+#    #+#              #
#    Updated: 2018/08/24 08:51:31 by gferreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_strchr.c ft_handler.c ft_printf.c ft_itoa_base.c ft_putaddress.c ft_unsigned.c \
	  ft_caphex.c ft_putchar.c ft_putstr.c ft_putnum.c ft_toupper.c ft_strlen.c 

OBJ = ft_strchr.o ft_handler.o ft_printf.o ft_itoa_base.o ft_putaddress.o ft_unsigned.o \
	  ft_caphex.o ft_putstr.o ft_putchar.o ft_putnum.o ft_toupper.o ft_strlen.o 

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	#ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
