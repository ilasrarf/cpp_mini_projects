NAME = megaphone
SRC = megaphone.cpp

CC = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: ${NAME}

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	${RM} ${NAME}

re: fclean all