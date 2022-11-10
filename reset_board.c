#include "ttt.h"

void	reset_board(char *matrix)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		matrix[i] = ' ';
		i++;
	}
	matrix[i] = '\0';
}
