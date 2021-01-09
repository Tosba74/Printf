# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2021/01/08 19:24:07 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

HDRS	= ft_printf.h

LIBFT	= libft.a

F_HDRS	= includes/

C_HRDS	= $(addprefix ${F_HDRS}, ${HDRS})

SRCS	= ft_printf.c ft_print_format.c ft_print_num.c ft_utils.c main.c

F_SRCS	= srcs/

C_SRCS	= $(addprefix ${F_SRCS}, ${SRCS})

F_LIB	= libft/

C_LIB	= $(addprefix ${F_LIB}, ${LIBFT})

OBJS	= ${C_SRCS:.c=.o}

MAKE	= make -C 

CC		= clang

FLAGS	= -Wall -Werror -Wextra

AR		= ar rc

RM		= rm -f

all:	${NAME}

%.o: %.c	${HDRS}
	${CC} ${FLAGS} -c $ -o $@ -I ${HDRS} 

$(NAME):	${OBJS}
	${MAKE} ${F_LIB}
	${AR} $@ $?

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all

test:
	${CC} -o prog ${NAME} ${C_LIB}

tests:
	${CC} -fsanitize=address -g3 ${NAME} ${C_LIB}

.PHONY:		all clean fclean re
