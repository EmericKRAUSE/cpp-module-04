NAME	=	polymorphism
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	src/main.cpp\
			src/Animal.cpp\
			src/Dog.cpp\
			src/Cat.cpp\
			src/WrongAnimal.cpp\
			src/WrongCat.cpp

OBJ		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re