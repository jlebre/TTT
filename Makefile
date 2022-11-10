CC = gcc
#	GNU Compiler Collection
#	Compiles the program

RM = @rm -rf
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address
#	Flags are variables containing options that should be
#	passed to the tools used in the compilation process.

NAME = TicTacToe
#	Name of the program

INCLUDE = .
#	Include header (.h) files

SRC = main.c freespaces.c player_moves.c print_board.c \
	check_winner.c print_winner.c reset_board.c colors.c
#	Source Files

OBJ = $(SRC:.c=.o)
#	.o = Object file

#	The compiler creates a .o for each source file,
#	before linking them together, into the final executable.

#	$(SRC:.c=.o) means, take the variable value ${SRCS},
#	which is a string composed of words separated by spaces,
#	and for each word, replace the suffix .c with .o.

all: $(NAME)
#	The name of all is not fixed. It's just a conventional name;
#	all target denotes that if you invoke it, make will build
#	all what's needed to make a complete build. 
#	This is usually a dummy target, which doesn't create any files,
#	but merely depends on the other files.

#	all target is usually the first in the makefile,
#	since if you just write make in command line, 
#	without specifying the target, it will build the first target.
#	And you expect it to be all.

$(NAME): $(OBJ) $(INCLUDE)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	@echo " ______   ______   ______ "
	@echo "/\__  _\ /\__  _\ /\__  _\ "
	@echo "\/_/\ \/ \/_/\ \/ \/_/\ \/ "
	@echo "   \ \_\    \ \_\    \ \_\ "
	@echo "    \/_/     \/_/     \/_/ "
#	Compiles everything
#	-o changes the name a.out to the name inserted after it

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
#	$< when used in the "recipe", means "the first prerequisite"
#	the first thing after the : in the line above.

clean:
	$(RM) $(OBJ)
	@echo "\033[0;31m.o Files Removed!\033[0m"
#	Removes .o files

fclean: clean
	$(RM) $(NAME)
	@echo "\033[0;31mTTT Removed!\033[0m"
#	Removes everything! .o files and $(NAME)

re: fclean all
#	Re-compiles the program! Runs fclean and then all

.PHONY: all clean fclean re
#	.PHONY - A PHONY target is one that is not really
#	the name of a file; rather it is just a name for
#	a recipe to be executed when you make an explicit request.
#
#	It is used to avoid conflict with a file of the same name
#	If we didn't used .PHONY, all, clean, fclean and re would not
#	work properly if a file with the same name was created in the dir.
#	.PHONY makes them special targets

############################################################################################

#	STEPS TO COMPILE C CODE:

#	Preprocessor (code.c -> code.i)
#	Assembly Code (code.i -> code.s)
#	Object Code (code.s -> code.o)
#	Linker (code.o -> a.out)

#	gcc -E code.c # generates preprocessed code
#	gcc -S code.c # generates assembly code
#	gcc -c code.c # generates object code
#	gcc code.c    # generates linked object code