#include "ttt.h"

char	check_winner(char *matrix)
{
	if ((matrix[0] == matrix[1] && matrix[1] == matrix[2] && matrix[0] == 'X')
		|| (matrix[3] == matrix[4] && matrix[4] == matrix[5] && matrix[3] == 'X')
		|| (matrix[6] == matrix[7] && matrix[7] == matrix[8] && matrix[6] == 'X')
		|| (matrix[0] == matrix[3] && matrix[3] == matrix[6] && matrix[0] == 'X')
		|| (matrix[1] == matrix[4] && matrix[4] == matrix[7] && matrix[1] == 'X')
		|| (matrix[2] == matrix[5] && matrix[5] == matrix[8] && matrix[2] == 'X')
		|| (matrix[0] == matrix[4] && matrix[4] == matrix[8] && matrix[0] == 'X')
		|| (matrix[6] == matrix[4] && matrix[4] == matrix[2] && matrix[6] == 'X'))
		return ('X');
	else if ((matrix[0] == matrix[1] && matrix[1] == matrix[2] && matrix[0] == 'O')
		|| (matrix[3] == matrix[4] && matrix[4] == matrix[5] && matrix[3] == 'O')
		|| (matrix[6] == matrix[7] && matrix[7] == matrix[8] && matrix[6] == 'O')
		|| (matrix[0] == matrix[3] && matrix[3] == matrix[6] && matrix[0] == 'O')
		|| (matrix[1] == matrix[4] && matrix[4] == matrix[7] && matrix[1] == 'O')
		|| (matrix[2] == matrix[5] && matrix[5] == matrix[8] && matrix[2] == 'O')
		|| (matrix[0] == matrix[4] && matrix[4] == matrix[8] && matrix[0] == 'O')
		|| (matrix[6] == matrix[4] && matrix[4] == matrix[2] && matrix[6] == 'O'))
		return ('O');
	return (' ');
}
