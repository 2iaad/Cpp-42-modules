NAME = RPN

FILES = main.cpp RPN.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp RPN.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all