# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:02:32 by zderfouf          #+#    #+#              #
#    Updated: 2024/11/10 17:25:20 by zderfouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES = megaphone.cpp

SRCS = $(FILES:.c=.o)

CC = c++

CFLAGS =  -std=c++98

all: $(NAME)

$(NAME): $(FILES)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	rm $(SRCS)

fclean:
	rm $(SRCS) $(NAME)

re: fclean all