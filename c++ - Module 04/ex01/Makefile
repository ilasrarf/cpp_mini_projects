# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 20:25:23 by ilasrarf          #+#    #+#              #
#    Updated: 2024/01/10 19:13:44 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poli
SRC = animal.cpp \
	  dog.cpp \
	  cat.cpp \
	  Brain.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp animal.hpp dog.hpp cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all