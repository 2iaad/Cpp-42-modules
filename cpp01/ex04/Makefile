# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 18:01:14 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/30 03:35:55 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

FILES = main.cpp Container.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -fsanitize=address #-std=c++98 #-Wall -Wextra -Werror

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