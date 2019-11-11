# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/11/11 20:09:18 by mcarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= main.c ft_strlen.c
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
