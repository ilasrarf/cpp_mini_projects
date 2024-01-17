# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 14:05:48 by ilasrarf          #+#    #+#              #
#    Updated: 2024/01/05 15:59:11 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaand
SRC = ClapTrap.cpp \
	  ScavTrap.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all