NAME = ex03

FILES = AMateria.cpp MateriaSource.cpp Cure.cpp Ice.cpp Character.cpp main.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address,undefined,leak

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp AMateria.hpp Cure.hpp ICharacter.hpp Ice.hpp Character.hpp
		@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(SRCS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

test:
	c++ -fsanitize=address,undefined ../z.cpp -std=c++98