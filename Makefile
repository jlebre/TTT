CC = gcc
RM = @rm -rf
FLAGS = -Wall -Werror -Wextra #-fsanitize=address

NAME = ttt

INCLUDE = .

SRC = main.c board.c colors.c init.c menu.c play.c play1.c play2.c tutorial.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	@echo " ______   ______   ______ "
	@echo "/\__  _\ /\__  _\ /\__  _\ "
	@echo "\/_/\ \/ \/_/\ \/ \/_/\ \/ "
	@echo "   \ \_\    \ \_\    \ \_\ "
	@echo "    \/_/     \/_/     \/_/ "
	@echo "\033[0;32mTTT Compiled!\033[0m"
 
.c.o:
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJ)
	@echo "\033[0;31m.o Files Removed!\033[0m"

fclean: clean
	$(RM) $(NAME) 
	@echo "\033[0;31mTTT Removed!\033[0m"

re: fclean all

.PHONY: all clean fclean re
