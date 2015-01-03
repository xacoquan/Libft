# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xacoquan <xacoquan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 13:46:21 by xacoquan          #+#    #+#              #
#    Updated: 2014/11/23 20:14:31 by xacoquan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strsub.c \
ft_tolower.c ft_toupper.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c \
ft_strtrim.c ft_strsplit.c ft_strclen.c

OBJ		= $(SRC:.c=.o)
CMP		= gcc #llvm-gcc
FLAGS	= -Wall -Werror -Wextra 

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[1;31;40m -------------- FINIIIII  GG. ---------------\033[0m"
%.o: %.c
	$(CMP) -I. -o $@ -c $? $(FLAGS)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

suicide: fclean
	rm -f $(SRC)
