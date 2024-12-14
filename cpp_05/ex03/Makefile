CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME	= intern

SRCS =	main.cpp					\
		sources/Bureaucrat.cpp		\
		sources/AForm.cpp			\
		sources/PresidentialPardonForm.cpp	\
		sources/RobotomyRequestForm.cpp		\
		sources/ShrubberyCreationForm.cpp	\
		sources/Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I ./includes -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
