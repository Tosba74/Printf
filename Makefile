# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 11:23:45 by bmangin           #+#    #+#              #
#    Updated: 2021/03/20 14:58:26 by bmangin          ###   ########lyon.fr    #
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

.SILENT:

_BLACK=\x1b[30m
_R=\x1b[31m
_G=\x1b[32m
_Y=\x1b[33m
_B=\x1b[34m
_P=\x1b[35m
_C=\x1b[36m
_E=\x1b[0m

all: 	${NAME}


%.o: %.c	${INC}
			${CC} ${FLAGS} -I ${INC_PATH} -c $< -o ${<:.c=.o}
			printf "\e[?35l${_Y}$< >>> ${_G}$@${_E} \e[0m\r\e[?35h"

$(NAME):	${OBJS}
			echo "\n"
			make -C ${LIBFT_PATH}
			cp ${LIBFT} $(NAME)
			${AR} ${NAME} ${OBJS}
			echo "${_P}-----${_E}\t${_R}        PRINTF     ${_E}\t${_P}-----${_E}"
			echo "${_P}-----${_E}\t${_R}   creating archive${_E}\t${_P}-----${_E}"
			echo "${_P}-----${_E}\t${_R}    library index${_E}\t${_P}-----${_E}"

bonus: 		${NAME} ${OBJS_BONUS}
			${AR} ${NAME} ${OBJS_BONUS}
clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re:			fclean all kitty

test:		${NAME}
			${CC} ${FLAGS} ${SRC} ./srcs/main.c ${NAME} -I includes
			clear
			./a.out | cat -e

kitty:
	        echo "\n"
	        echo "      ${_Y}_           ${_R}_${_E}"
	        echo "     ${_Y}/ \_______ ${_R}/|_\\ ${_E}"
	        echo "    ${_Y}/          ${_R}/_/ \_\\ ${_E}"
	        echo "   ${_Y}/             ${_R}\_/ /${_E}"
	        echo "__${_Y}|${_E}_              ${_R}|/${_Y}|${_E}__"
	        echo "__${_Y}|${_E}_  ${_C}O${_E}    ${_Y}_${_E}    ${_C}O${_E}  _${_Y}|${_E}__"
	        echo "__${_Y}|${_E}_      ${_Y}(_)${_E}      _${_Y}|${_E}__"
	        echo "   ${_Y}\\ ${_E}      ${_R}u${_E}       ${_Y}/${_E}"
	        echo "   ${_Y}_\_____________/_${_E}"
	        echo "  ${_Y}/  \\ ${_G}/ (___) \\ ${_Y}/  \\ ${_E}"
	        echo "  ${_Y}\__${_G}(  ${_B}o     o  ${_G})${_Y}__/${_E} "
	        echo " ${_B} PRINTF is ready !!!${_E}\n"

.PHONY: all clean fclean re bonus