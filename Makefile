# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/11/26 22:04:14 by mcarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c  \
	ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_isspace.c ft_memchr.c \
	ft_memccpy.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memset.c  \
	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strnstr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c \
	\
	ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c
SRC_BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonuc.c
OBJ 		= ${SRC:.c=.o}
OBJ_BONUS	= $(SRC_BONUS:.c=.o)
NAME 		= libft.a
LIB			= libft.h
CFLAGS 		= -Wall -Werror -Wextra
CC 			= gcc

all: 			${NAME}

.c.o:			${LIB}
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJ}
				${CC} ${CFLAGS} ${LIB} -c ${SRC}
				ar rcs ${NAME} ${OBJ}

bonus:			${OBJ_BONUS}
				${CC} ${CFLAGS} ${LIB} -c ${SRC_BONUS}
				ar rcs ${NAME} ${OBJ_BONUS}

clean:
				rm -f ${OBJ} ${OBJ_BONUS}

fclean:			clean
				rm -f ${NAME}

norme:
				norminette ${SRC} ${LIB}

re:				fclean all

.PHONY:			clean fclean norme re all bonus
