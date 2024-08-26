# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 13:26:12 by mbrousse          #+#    #+#              #
#    Updated: 2024/08/21 19:04:27 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=		PhoneBook

CC			=		c++
CPPFLAGS 	=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -rf

INCLUDES	=		header.hpp
SRCS		=		main.cpp

all:		${NAME}

${NAME}:
			${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

fclean:
			${RM} ${NAME}

re:			fclean all

.PHONY:		fclean, all, re