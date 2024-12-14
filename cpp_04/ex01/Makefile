# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 19:57:24 by aabashee          #+#    #+#              #
#    Updated: 2024/09/03 19:57:26 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME	= animal

SRCS =	main.cpp				\
		sources/Animal.cpp		\
		sources/Brain.cpp		\
		sources/Dog.cpp			\
		sources/Cat.cpp			\
		sources/WrongAnimal.cpp	\
		sources/WrongCat.cpp


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
