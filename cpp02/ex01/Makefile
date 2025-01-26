NAME = Fixed

FILES = main.cpp Fixed.cpp \

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -Wnull-dereference -std=c++98

SRCS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp Fixed.hpp
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(SRCS)

fclean: clean
		rm -rf $(NAME)

re: fclean all