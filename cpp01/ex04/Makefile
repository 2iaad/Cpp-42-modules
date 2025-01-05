# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 18:01:14 by zderfouf          #+#    #+#              #
#    Updated: 2025/01/02 17:53:32 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

FILES = main.cpp Container.cpp \

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
	rm -rf *.replace

re: fclean all