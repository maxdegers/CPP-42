# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 11:42:33 by mbrousse          #+#    #+#              #
#    Updated: 2024/08/15 11:54:14 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=		megaphone

CC			=		c++
CPPFLAGS 	=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -rf

INCLUDES	=		includes
SRCS		=		megaphone.cpp

all:		${NAME}

${NAME}:
			${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

fclean:
			${RM} ${NAME}

re:			fclean all

.PHONY:		fclean, all, re

