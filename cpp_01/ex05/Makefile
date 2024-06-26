# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 13:41:00 by aabashee          #+#    #+#              #
#    Updated: 2024/06/26 13:41:03 by aabashee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp
INCLUDES = harl.hpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} -I ${INCLUDES} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all
