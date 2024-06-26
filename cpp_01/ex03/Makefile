# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 13:39:40 by aabashee          #+#    #+#              #
#    Updated: 2024/06/26 13:39:42 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnercessaryviolence
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS}  ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all
