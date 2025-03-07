NAME = ex00

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp  WrongCat.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp  WrongCat.hpp
		@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(SRCS)

fclean: clean
		rm -rf $(NAME)

re: fclean all