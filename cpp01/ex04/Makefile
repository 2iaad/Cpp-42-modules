# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 18:01:14 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/14 18:55:01 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

FILES = main.cpp  \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = #-fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c #header
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all