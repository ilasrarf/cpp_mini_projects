# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 17:41:54 by ilasrarf          #+#    #+#              #
#    Updated: 2023/12/18 16:16:11 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
SRC = newZombie.cpp \
	  randomChump.cpp \
	  Zombie.cpp \
	  main.cpp 

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: ${NAME}

${NAME}: ${OBG}
	${CC} ${FLAGS} ${SRC} -o ${NAME}

%.o: %.cpp Zombie.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBG}

fclean: clean
	${RM} ${NAME}

re: fclean all