# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:09:24 by ilasrarf          #+#    #+#              #
#    Updated: 2023/12/26 10:46:01 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Canonical
SRC = Fixed.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all