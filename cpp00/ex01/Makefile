# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 10:50:50 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/27 20:51:26 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = phonebook.cpp contact.cpp tools.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ -fsanitize=address 

RM  = rm -rf

CPPFLAGS =  -fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c phonebook.hpp contact.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SRCS)

fclean: clean
	rm $(NAME)

re: fclean all