#include "ttt.h"

void	print_winner(char winner)
{
	if (winner == 'X')
		green("Player1 Won!\n");
	else if (winner == 'O')
		green("Player2 Won!\n");
	
}
