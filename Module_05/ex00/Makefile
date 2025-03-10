NAME = ex00

TEST_NAME = test

FILES = Bureaucrat.cpp main.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp Bureaucrat.hpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME) $(TEST_NAME)

re: fclean all

test: ../z.cpp
	c++ -std=c++98 ../z.cpp -g3 -fsanitize=address,undefined,leak -o test