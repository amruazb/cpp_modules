# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 13:43:21 by aabashee          #+#    #+#              #
#    Updated: 2024/07/04 13:43:25 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
			${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
			@rm -rf ${NAME}

clean:
			@rm -rf ${OBJ}

re: fclean all
