NAME = btc

FILES = main.cpp BitcoinExchange.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -fsanitize=address,undefined # -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp BitcoinExchange.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	c++ ../../*tests/cpp.cpp