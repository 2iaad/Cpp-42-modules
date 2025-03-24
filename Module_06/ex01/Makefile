NAME = ex01

TEST_NAME = test

FILES = Serializer.cpp main.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

LEAKER_HEHE = #-g3 -fsanitize=address,undefined 

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) $^ -o $@

%.o: %.cpp	Serializer.hpp
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME) $(TEST_NAME)

re: fclean all

test: ../z.cpp Makefile
	c++ -std=c++98 ../z.cpp -o test $(LEAKER_HEHE)