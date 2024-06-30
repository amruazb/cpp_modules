# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/29 19:48:50 by aabashee          #+#    #+#              #
#    Updated: 2024/06/29 19:48:54 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS}  ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all
