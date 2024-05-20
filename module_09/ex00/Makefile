# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 20:55:57 by mobadiah          #+#    #+#              #
#    Updated: 2024/05/20 21:00:35 by mobadiah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS =  src/main.cpp src/BitcoinExchange.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CC)  $(OBJS) $(FLAGS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
