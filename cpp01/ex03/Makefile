# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 21:14:12 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/12 21:17:11 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = war

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = #-fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c Weapon.hpp HumanA.hpp HumanB.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all