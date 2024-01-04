# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:52:28 by ilasrarf          #+#    #+#              #
#    Updated: 2023/12/18 16:16:50 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
SRC = main.cpp \
	  Harl.cpp \

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