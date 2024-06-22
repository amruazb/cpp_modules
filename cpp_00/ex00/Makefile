NAME = megaphone

CXX = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(NAME).cpp
	$(CXX) $(CFLAGS) -o $(NAME) $(NAME).cpp

fclean:
	rm -f $(NAME)

re: fclean all

