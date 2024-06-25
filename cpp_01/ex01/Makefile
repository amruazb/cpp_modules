# Compiler
CXX = c++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Output Executable Name
NAME = zombie

# Source Files
SRC = main.cpp Zombie.cpp  zombieHorde.cpp

# Object Files
OBJ = $(SRC:.cpp=.o)

# All Target (default)
all: $(NAME)

# Link Object Files to Create Executable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compile Each Source File into an Object File
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Object Files
clean:
	rm -f $(OBJ)

# Clean Object Files and Executable
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

