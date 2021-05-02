# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 01:09:30 by juhur             #+#    #+#              #
#    Updated: 2021/05/02 10:35:48 by juhur            ###   ########.fr        #
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
	./ft_tolower.c	\
	./ft_atoi.c		\
	./ft_strstr.c	\
	./ft_strcmp.c	\
	./ft_memcpy.c	\
	./ft_memccpy.c	\
	./ft_memcmp.c	\
	./ft_strchr.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strncmp.c	\

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
