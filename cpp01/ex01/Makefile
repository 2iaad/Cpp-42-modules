# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 01:24:58 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/02 01:24:59 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = #-fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all