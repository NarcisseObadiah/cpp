NAME = bureaucrat
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
OBJS = $(SRCS:.cpp=.o)
SRCS = Bureaucrat.cpp  AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp 
$(NAME): $(OBJS)
	@$(CC)  $(OBJS) $(FLAGS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

