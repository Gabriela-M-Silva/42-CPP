NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

OBJ_DIR	=	./obj

CC		=	c++ 
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

RM		=	rm -rf

$(OBJ_DIR)/%.o: %.cpp
	make create_obj_dir
	$(CC) $(CCFLAGS) -c $< -o $@

# COMPILE
$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJ)

# RULES
all: $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) -r $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

create_obj_dir:
	mkdir -p $(OBJ_DIR)

.PHONY:	all clean fclean re create_obj_dir