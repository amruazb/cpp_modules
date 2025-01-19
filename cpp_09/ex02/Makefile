# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 21:03:11 by aabashee          #+#    #+#              #
#    Updated: 2025/01/19 21:18:47 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC =	main.cpp PmergeMe.cpp

HEADER = PmergeMe.hpp

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	@echo "💻 .o was MADE."
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "🗑 .o is REMOVED."

fclean:
	@rm -f $(OBJ) $(NAME)
	@echo "🧼 All CLEAN."

re: fclean all
