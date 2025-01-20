NAME = megaphone

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	@$(CC) $(FLAGS) $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $@

all : $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re clean all fclean
