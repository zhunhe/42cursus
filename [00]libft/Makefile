# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/03 12:24:33 by juhur             #+#    #+#              #
#    Updated: 2021/05/18 07:02:11 by juhur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
	./ft_atoi.c			./ft_bzero.c		./ft_calloc.c	\
	./ft_isalnum.c		./ft_isalpha.c		./ft_isascii.c	\
	./ft_isdigit.c		./ft_isprint.c		./ft_itoa.c		\
	./ft_memccpy.c		./ft_memchr.c		./ft_memcmp.c	\
	./ft_memcpy.c		./ft_memmove.c		./ft_memset.c	\
	./ft_putchar_fd.c	./ft_putendl_fd.c	./ft_putnbr_fd.c\
	./ft_putstr_fd.c	./ft_split.c		./ft_strchr.c	\
	./ft_strdup.c		./ft_strjoin.c		./ft_strlcat.c	\
	./ft_strlcpy.c		./ft_strlen.c		./ft_strmapi.c	\
	./ft_strncmp.c		./ft_strnstr.c		./ft_strrchr.c	\
	./ft_strtrim.c		./ft_substr.c		./ft_tolower.c	\
	./ft_toupper.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = \
	./ft_lstadd_back.c	./ft_lstadd_front.c	./ft_lstclear.c	\
	./ft_lstdelone.c	./ft_lstiter.c		./ft_lstlast.c	\
	./ft_lstmap.c		./ft_lstnew.c		./ft_lstsize.c	\

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

.PHONY: all
all : $(NAME)

.PHONY: bonus
bonus : $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY: clean
clean :
	rm -rf $(OBJS) $(BONUS_OBJS)

.PHONY: fclean
fclean : clean
	rm -rf $(NAME)

.PHONY: re
re : fclean all

AR = ar
ARFLAGS = rcs

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
