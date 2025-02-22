# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 10:50:50 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/01 16:57:02 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = main.cpp phonebook.cpp contact.cpp tools.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c phonebook.hpp contact.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all