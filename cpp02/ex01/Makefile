NAME = harlFilter

FILES = main.cpp Fixed.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(SRCS)

fclean: clean
		rm -rf $(NAME)

re: fclean all