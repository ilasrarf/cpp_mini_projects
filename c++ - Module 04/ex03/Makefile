# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 17:04:16 by ilasrarf          #+#    #+#              #
#    Updated: 2024/01/14 13:18:52 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poli
SRC = AMateria.cpp \
	  Ice.cpp \
	  Cure.cpp \
	  Character.cpp \
	  MateriaSource.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all