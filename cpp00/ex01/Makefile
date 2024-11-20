# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 10:50:50 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/19 19:09:26 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = phonebook.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ #-fsanitize=address

RM  = rm -rf

CFLAGS = -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $@

%.o: %.c phonebook.hpp contact.hpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(SRCS)

fclean: clean
	rm $(NAME)

re: fclean all