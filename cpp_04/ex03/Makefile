# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 20:03:27 by aabashee          #+#    #+#              #
#    Updated: 2024/09/03 20:03:29 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g3 #-pedantic -pedantic-errors -Wconversion -Wsign-conversion -Wshadow -Weffc++ -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wnull-dereference -Wdouble-promotion -Wformat=2 -O2 -g3 -fsanitize=address -fsanitize=undefined -fsanitize=bounds

NAME	= morpheus

SRCS =	main.cpp					\
		sources/AMateria.cpp		\
		sources/MateriaSource.cpp	\
		sources/Character.cpp		\
		sources/Cure.cpp			\
		sources/Ice.cpp

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
