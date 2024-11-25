# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 09:27:43 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/25 10:07:40 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dream

FILES = Account.cpp tests.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++ 

RM  = rm -rf

CPPFLAGS = #-fsanitize=address -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.c Account.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SRCS)

fclean: clean
	rm $(NAME)

re: fclean all