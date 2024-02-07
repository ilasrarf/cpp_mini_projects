# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 10:58:37 by ilasrarf          #+#    #+#              #
#    Updated: 2024/02/06 11:50:10 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
SRC = main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp whatever.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all