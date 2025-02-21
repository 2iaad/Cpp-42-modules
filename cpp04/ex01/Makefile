NAME = ex01

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp\

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address,undefined

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
		@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(SRCS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

test:
	c++ -fsanitize=address,leak,undefined z.cpp