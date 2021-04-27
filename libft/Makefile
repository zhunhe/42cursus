# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 01:09:30 by juhur             #+#    #+#              #
#    Updated: 2021/04/27 12:54:03 by juhur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Do "make" to make TARGET
TARGET = libft.a

# Compiler
CC = gcc

# Compile option
# -Wall: Display all ambiguous warnings
# -Wextra: Display additional warnings not displayed by -Wall
# -Werror: Make all warnings into errors
# -I: Specify the directory where the header files are located
CFLAGS = -Wall -Wextra -Werror -I./incl

# Source files
SRC =				\
	src/libc/ft_strlen.c	\
	src/libc/ft_memset.c	\
	src/libc/ft_bzero.c	\
	src/libc/ft_isascii.c	\
	src/libc/ft_isdigit.c	\
	src/libc/ft_isalpha.c	\
	src/libc/ft_isalnum.c	\
	src/libc/ft_isprint.c

# Object files
OBJ = $(SRC:.c=.o)

# ar: archive
AR = ar

# r: Insert (object) files into archive
# c: Create archive
# s: Make index
ARFLAGS = rcs

$(TARGET): $(OBJ)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJ)

# To avoid a conflict with a file of the same name,
# and to improve performance.
.PHONY: all clean fclean re

# same as "make"
all: $(TARGET)

# Delete "*.o"
clean:
	rm -f $(OBJ)

# Delete "TARGET" and "*.o"
fclean: clean
	rm -f $(TARGET)

# Run "make fclean" and "make all"
re: fclean all
