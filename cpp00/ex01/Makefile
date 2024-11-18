# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 10:50:50 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/18 11:11:44 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = phonebook.cpp

SRCS = $(FILES:.c=.o)

CC = c++

CFLAGS = -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	rm $(SRCS)

fclean:
	rm $(SRCS) $(NAME)

re: fclean all