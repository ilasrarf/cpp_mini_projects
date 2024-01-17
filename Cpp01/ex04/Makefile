# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 16:34:17 by ilasrarf          #+#    #+#              #
#    Updated: 2023/12/19 19:40:56 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
SRC = sed.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: ${NAME}

${NAME}: ${OBG}
	${CC} ${FLAGS} ${SRC} -o ${NAME}

%.o: %.cpp sed.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBG}

fclean: clean
	${RM} ${NAME}

re: fclean all