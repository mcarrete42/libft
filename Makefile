# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/11/17 14:13:55 by mcarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c  \
	ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_isspace.c ft_memchr.c \
	ft_memccpy.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memset.c  \
	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strnstr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c
OBJ 		= ${SRC:.c=.o}
NAME 		= libft.a
LIB			= libft.h
CFLAGS 		= -Wall -Werror -Wextra
CC 			= gcc

all: 			${NAME}

.c.o:			${LIB}
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJ}
				ar rc ${NAME} ${OBJ}

clean:
				rm -f ${OBJ}

fclean:			clean
				rm -f ${NAME}

norme:
				norminette ${SRC} ${LIB}

re:				clean fclean all

.PHONY:			clean fclean norme re
