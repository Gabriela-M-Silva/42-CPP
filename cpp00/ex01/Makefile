NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = $(wildcard ./src/*.cpp)

OBJ = obj

OBJ_FILES = $(SRC_FILES:src/%.cpp=$(OBJ)/%.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	c++ $(FLAGS) -I./ $(OBJ_FILES) -o $(NAME)

${OBJ}/%.o : src/%.cpp
	mkdir -p ${OBJ}
	c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re