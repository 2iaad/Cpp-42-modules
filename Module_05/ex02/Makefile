NAME = ex02

TEST_NAME = test

FILES = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp main.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

LEAKER_HEHE = #-g3 -fsanitize=address,leak,undefined 

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) $^ -o $@

%.o: %.cpp AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(LEAKER_HEHE) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME) $(TEST_NAME) *_shrubbery

re: fclean all

test: ../z.cpp Makefile
	c++ -std=c++98 ../z.cpp -o test $(LEAKER_HEHE)