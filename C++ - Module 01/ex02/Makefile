# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 23:37:27 by ilasrarf          #+#    #+#              #
#    Updated: 2023/11/28 00:00:39 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN
SRC = main.cpp

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: ${NAME}

${NAME}: ${SRC}
	${CC} ${FLAGS} ${SRC} -o ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all