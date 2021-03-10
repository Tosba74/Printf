# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2021/03/04 10:33:17 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

LIBFT	= libft.a

HDRS	= ft_printf.h

SRCS	= ft_printf.c ft_utils.c ft_print_str.c ft_print_nbr.c ft_print_unbr.c

D_HDRS	= includes/

D_SRCS	= srcs/

D_LIB	= libft/

C_HRDS	= $(addprefix ${D_HDRS}, ${HDRS})

C_SRCS	= $(addprefix ${D_SRCS}, ${SRCS})

C_LIB	= $(addprefix ${D_LIB}, ${LIBFT})

C_HLIB	= $(addprefix ${D_SRCS}, ${HDRS})

OBJS	= ${C_SRCS:.c=.o}

MAKE	= make -C 

CC		= clang

FLAGS	= -Wall -Werror -Wextra

AR		= ar rcs

RM		= rm -f

all:	${NAME}

%.o: %.c	${C_HDRS}
	${CC} ${FLAGS} -I ${D_HDRS} -I ${C_HLIB} -c $< -o $@

libft:
	make -C libft/

${NAME}:	libft ${OBJS}
	${AR} $@ ${C_LIB} $?

bonus:		${NAME} ${OBJS_B}
	{AR} ${NAME} ${BONUS}

clean:
	${MAKE} ${D_LIB} clean
	${RM} ${OBJS}

fclean:		clean
	${MAKE} ${D_LIB} fclean
	${RM} ${NAME}

re:			fclean all

test:
	${CC} ${FLAGS} ${OBJS} main/main.c ${C_LIB} -o prog -I ${F_HDRS}
	./prog | cat -e 

tests:
	${CC} -fsanitize=address -g3 main/main.c ${NAME} ${C_LIB}

a:	all test

.PHONY:		all clean fclean test tests re a
