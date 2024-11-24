# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 15:59:56 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/24 16:15:06 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

RM  = rm -rf

CPPFLAGS = #-fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SRCS)

fclean: clean
	rm $(NAME)

re: fclean all