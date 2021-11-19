# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 15:40:13 by jhermon-          #+#    #+#              #
#    Updated: 2021/11/19 16:15:26 by jhermon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c ft_printf_utils.c ft_set_printf.c ft_hexa.c ft_conversion.c 


HEADERS		= ft_printf.h

OBJS		= ${SRCS:.c=.o}

NAME 		= libftprintf.a

CC 			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

LIB			= ar rcs


all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

compile:
			${CC} ${CFLAGS} ${SRCS} && ./a.out

${NAME}: 	${OBJS}
		 	${LIB} ${NAME} ${OBJS}
			
clean:
			${RM} ${OBJS}
			${RM} ./a.out

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
