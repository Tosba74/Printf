# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2021/01/27 16:48:39 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

HDRS	= ft_printf.h

LIBFT	= libft.a

F_HDRS	= includes/

C_HRDS	= $(addprefix ${F_HDRS}, ${HDRS})

SRCS	= ft_printf.c ft_print_format.c ft_print_num.c ft_print_str.c \
		ft_utils.c main.c

F_SRCS	= srcs/

C_SRCS	= $(addprefix ${F_SRCS}, ${SRCS})

F_LIB	= libft/

C_LIB	= $(addprefix ${F_LIB}, ${LIBFT})

OBJS	= ${C_SRCS:.c=.o}

MAKE	= make -C 

CC		= clang

FLAGS	= -Wall -Werror -Wextra

AR		= ar rcs

RM		= rm -f

all:	${NAME}

%.o: %.c	${HDRS}
	${CC} ${FLAGS} -c $< -o $@ -I ${F_HDRS} 

${NAME}:	${OBJS}
	${MAKE} ${F_LIB}
	${AR} $@ ${C_LIB} $?

clean:
	${MAKE} ${F_LIB} clean
	${RM} ${OBJS}

fclean:		clean
	${MAKE} ${F_LIB} fclean
	${RM} ${NAME}

re:			fclean all

test:
	${CC} ${FLAGS} ${OBJS} ${C_LIB} -o prog -I ${F_HDRS}
	./prog | cat -e 

tests:
	${CC} -fsanitize=address -g3 ${NAME} ${C_LIB}

a:	re test

.PHONY:		all clean fclean test tests re
