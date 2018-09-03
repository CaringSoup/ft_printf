# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gferreir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 08:26:17 by gferreir          #+#    #+#              #
#    Updated: 2018/09/03 09:54:28 by gferreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_strchr.c ft_handler.c ft_printf.c ft_itoa_base.c ft_putaddress.c ft_unsigned.c \
	  ft_caphex.c ft_putchar.c ft_putstr.c ft_putnum.c ft_toupper.c ft_strlen.c 

OBJ = $(SRC:.c=.o)

CLFAGS = -Wall -Werror -Wextra

%.o:	%.c
	gcc $(CLFAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	#ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
