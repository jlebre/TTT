#include "ttt.h"

int main(void)
{
	char	*matrix;
	char	winner;

	winner = ' ';
	matrix = (char *)malloc(sizeof(char *) * 10);
	if (!matrix)
		return (0);
	reset_board(matrix);
	print_board(matrix);
	while (winner == ' ' && freespaces(matrix) != 0)
	{
		player1(matrix);
		print_board(matrix);
		winner = check_winner(matrix);
		if (winner != ' ' || freespaces(matrix) == 0)
		{
			print_winner(winner);
			break ;
		}
		player2(matrix);
		print_board(matrix);
		winner = check_winner(matrix);
		if (winner != ' ' || freespaces(matrix) == 0)
		{
			print_winner(winner);
			break ;
		}
	}
	free(matrix);
	return (0);
}
