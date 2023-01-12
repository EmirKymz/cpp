SRC = account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
#pedantic derleyici tarafından desteklenmeyen ISO C++ standartlarına uymayan kodları tespit etmek için kullanılır.
UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
CPPFLAGS = -Wall -Wextra -pedantic
$(warning Linux detected! Disabling -Werror and -std=c++98...)
endif

NAME = dream

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re