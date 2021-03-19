# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2021/03/14 17:46:01 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

NAME_LIBFT 	= libft.a

FILES			= ft_printf.c ft_utils.c ft_print_str.c ft_print_nbr.c \
				ft_print_unbr.c ft_print_hexa.c

FILES_BONUS = 

INC_FILES	= ft_printf.h

LIBFT_PATH 	= libft/

SRC_PATH	= ./srcs/

INC_PATH	= ./includes/

SRC			=  $(addprefix ${SRC_PATH}, ${FILES})

SRC_BONUS	=  $(addprefix ${SRC_PATH}, ${FILES} ${FILES_BONUS})

INC			= $(addprefix ${INC_PATH}, ${INC_FILES})

LIBFT		= $(addprefix ${LIBFT_PATH}, ${NAME_LIBFT})

OBJS 		= ${SRC:.c=.o}

OBJS_BONUS	= ${SRC_BONUS:.c=.o}

AR			= ar rcs

CC			= clang

FLAGS		= -Wall -Wextra -Werror 

all: 	${NAME}


%.o: %.c	${INC}
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC_PATH}
$(NAME):	${OBJS}
			make -C ${LIBFT_PATH}
			cp ${LIBFT} $(NAME)
			${AR} ${NAME} ${OBJS}

bonus: 		${NAME} ${OBJS_BONUS}
			${AR} ${NAME} ${OBJS_BONUS}
clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re:			fclean all

test:		${NAME}
			${CC} ${FLAGS} ${SRC} ./srcs/main.c ${NAME} -I includes
			clear
			./a.out | cat -e

.PHONY: all clean fclean re bonus