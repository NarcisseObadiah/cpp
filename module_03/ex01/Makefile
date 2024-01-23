NAME = prog
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS = main.cpp ClapTrap.cpp ScapTrap.cpp
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

