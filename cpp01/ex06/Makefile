# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 15:12:49 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/30 17:48:40 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

FILES = main.cpp Harl.cpp \

SRCS = $(FILES:.cpp=.o)

CC = c++ 

CPPFLAGS = -fsanitize=address -std=c++98 #-Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c Harl.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all