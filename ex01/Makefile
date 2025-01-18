NAME = contactRepository

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)


$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $@

all : $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
