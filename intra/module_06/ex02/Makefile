# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 23:30:41 by narcisse          #+#    #+#              #
#    Updated: 2024/05/15 06:23:54 by mobadiah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS =  main.cpp Functions.cpp
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
