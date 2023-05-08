NAME = DiamondTrap

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

SRC_FILES	=	ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp main.cpp ScavTrap.cpp
OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

CC = g++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -Wshadow
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@ rm -rf $(OBJ)
		@echo "Program compiled";

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<


clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "Deleting all objects from /ex03..."; else \
	echo "No objects to remove from /ex03."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "Deleting from /ex03..."; else \
	echo "No Executable to remove from /ex03."; \
	fi;

run : all
	./$(NAME)
re : fclean all