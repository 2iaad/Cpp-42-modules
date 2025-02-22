# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:02:32 by zderfouf          #+#    #+#              #
#    Updated: 2024/12/01 16:55:53 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES = megaphone.cpp

SRCS = $(FILES:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(SRCS)

fclean:
	rm -f $(SRCS) $(NAME)

re: fclean all