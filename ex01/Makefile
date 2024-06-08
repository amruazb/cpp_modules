NAME = phonebook

SRCS = Contact.cpp \
	   Phonebook.cpp \
	   main.cpp
CXX = c++

FLAGS = -std=cc++98 -Wall -Wextra -Werror

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX)	$(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME) $(OBJS)

re: clean all
