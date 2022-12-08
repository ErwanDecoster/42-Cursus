# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 17:25:58 by edecoste          #+#    #+#              #
#    Updated: 2022/11/24 10:42:19 by edecoste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =			ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_strlen.c \
				ft_putnbr_b_fd.c \
				ft_putstr_fd.c \
				ft_printf.c \

HEADERS		= ft_printf.h

OBJS		= ${SRCS:.c=.o}

FLAGS		=  -Wall -Wextra -Werror

NAME		= libftprintf.a

CC			= cc

AR			= ar rc

RM			= rm -f

%.o: %.c ${HEADERS} Makefile
			${CC} ${FLAGS} -c $< -o $@ -I ${HEADERS}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
			
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re