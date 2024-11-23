# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:02:32 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/23 00:29:32 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES = megaphone.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++

CFLAGS =  -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	rm $(SRCS)

fclean:
	rm $(SRCS) $(NAME)

re: fclean all