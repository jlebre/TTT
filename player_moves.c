#include "ttt.h"

void	player1(char *matrix)
{
	int	coordinate1;

	printf("Player1 Move\n");
	printf("Choose a number between 1-9\n");
	while (1)
	{
		scanf("%d", &coordinate1);
		if (matrix[coordinate1 - 1] != ' ')
			red("Invalid move!\n");
		else
		{
			matrix[coordinate1 - 1] = 'X';
			break ;
		}
	}
}

void	player2(char *matrix)
{
	int	coordinate2;

	printf("Player2 Move\n");
	printf("Choose a number between 1-9\n");
	while (1)
	{
		scanf("%d", &coordinate2);
		if (matrix[coordinate2 - 1] != ' ')
			red("Invalid move!\n");
		else
		{
			matrix[coordinate2 - 1] = 'O';
			break ;
		}
	}
}
