# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 20:06:13 by ichaabi           #+#    #+#              #
#    Updated: 2023/11/28 16:01:32 by ichaabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEARDER = ft_printf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_strlen.c ft_putstr.c ft_putnbr.c ft_putchar.c \
	ft_lenghtnumb.c ft_printunsign.c ft_hexalen.c ft_putlowhexa.c ft_putuphexa.c \
	ft_printadd.c ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c ${HEARDER}
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re
