NAME = ex01

TEST_NAME = test

FILES = Bureaucrat.cpp Form.cpp main.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

LEAKER_HEHE = #-g3 -fsanitize=address,leak,undefined 

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) $^ -o $@

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME) $(TEST_NAME)

re: fclean all

test: ../z.cpp Makefile
	c++ -std=c++98 ../z.cpp -o test $(LEAKER_HEHE)