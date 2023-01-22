NAME = bsp
CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@ rm -rf $(OBJ)
		@echo "Program compailed";

$(OBJ) :
		@$(CC) $(CFLAGS) $(SRC) -c

clean :
		@rm -rf $(OBJ)

fclean : clean
		@rm -rf $(NAME)
run : all
	./$(NAME)
re : fclean all