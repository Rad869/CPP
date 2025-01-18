NAME = recovery_prog

SRC = Account.cpp tests.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

FLAGS = -std=c++98 #-Wall -Wextra -Werror

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
