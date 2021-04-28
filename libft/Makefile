# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 01:09:30 by juhur             #+#    #+#              #
#    Updated: 2021/04/28 12:34:37 by juhur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =				\
	./ft_strlen.c	\
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_isascii.c	\
	./ft_isdigit.c	\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c

OBJ = $(SRC:.c=.o)

AR = ar

ARFLAGS = rcs

$(TARGET): $(OBJ)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJ)

all: $(TARGET)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
