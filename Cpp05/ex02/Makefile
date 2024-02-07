# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 14:22:27 by ilasrarf          #+#    #+#              #
#    Updated: 2024/01/28 17:23:43 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mommy
SRC = Bureaucrat.cpp \
	  ShrubberyCreationForm.cpp \
	  PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp \
	  AForm.cpp \
	  main.cpp \

OBG = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBG)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp  Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBG)

fclean: clean
	$(RM) $(NAME)

re: fclean all