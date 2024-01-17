# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 17:12:56 by ilasrarf          #+#    #+#              #
#    Updated: 2023/12/18 16:16:42 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
SRC = Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: ${NAME}

${NAME}: ${OBG}
	${CC} ${FLAGS} ${SRC} -o ${NAME}

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBG}

fclean: clean
	${RM} ${NAME}

re: fclean all