# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2020/12/14 20:00:42 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

HDRS	= ft_printf.h

F_HDRS	= ./includes/

C_HRDS	= $(addprefix ${F_HDRS}, ${HDRS})

SRCS	= ft_printf.c ft_print_format.c ft_print_num.c ft_utils.c main.c

F_SRCS	= ./srcs/

C_SRCS	= $(addprefix ${F_SRCS}, ${SRCS})

LIBFT	= make -C include all

F_LIB	= ./libft/

C_LIB	= $(addprefix ${F_LIB}, ${LIBFT})

OBJS	= ${C_SRCS:.c=.o}

CC		= clang

FLAGS	= -Wall -Werror -Wextra

AR		= ar rc

RM		= rm -f

%.o: %.c	${HDRS}
	${CC} ${FLAGS} -c $ -o $@ -I ${HDRS}

all:	${NAME}

$(NAME):	${OBJS}
	${AR} $@ $?

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re