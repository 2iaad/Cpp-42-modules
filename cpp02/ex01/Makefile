NAME = harlFilter

FILES = main.cpp Fixed.cpp \

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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