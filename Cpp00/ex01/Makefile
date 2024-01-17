# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 16:30:51 by ilasrarf          #+#    #+#              #
#    Updated: 2023/11/01 16:32:24 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
SRC = Contact.cpp \
	  PhoneBook.cpp \
	  tools.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c Contact.hpp PhoneBook.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all