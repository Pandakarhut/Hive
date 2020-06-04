# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/04 16:18:43 by jtian             #+#    #+#              #
#    Updated: 2020/06/04 18:18:03 by jtian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a
OUTPUT = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o \
ft_strlen.o ft_swap.o
HEADER = includes

all: $(LIB_NAME)

$(LIB_NAME):
		gcc -Wall -Wextra -Werror -c $(OUTPUT) -I $(HEADER)
		ar rc $(LIB_NAME) $(OBJECT)
		ranlib $(LIB_NAME)

clean:
		/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(LIB_NAME)

re: fclean all
