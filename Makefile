# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/11/05 21:07:16 by mcarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#quitar MAIN!!!!!!
SRC 		= main.c ft_memcpy.c ft_bzero.c ft_memset.c ft_strlen.c ft_isalpha.c 
				ft_digit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c 
OBJ 		= ${SRC:.c=.o}
BINARY 		= libft.a
LIB			= lib.h
CFLAGS 		= -Wall -Werror -Wextra
CC 			= gcc

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 			${BINARY}

${BINARY}:		${OBJ} ${LIB}
				${CC} -o ${BINARY} ${OBJ}

clean:
				rm -f ${OBJ}

fclean:			clean
				rm -f ${BINARY}

norme:
				norminette ${SRC} ${LIB}

.PHONY:			clean fclean norme
