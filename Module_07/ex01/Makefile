NAME = ex01

FILES = main.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp iter.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
