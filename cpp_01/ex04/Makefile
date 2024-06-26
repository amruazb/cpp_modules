# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 13:40:31 by aabashee          #+#    #+#              #
#    Updated: 2024/06/26 13:40:33 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp


OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS}  ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all
