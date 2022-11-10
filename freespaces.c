#include "ttt.h"

int	freespaces(char *matrix)
{
	int	i;
	int	counter;

	i = 0;
	counter = 9;
	while (i < 9)
	{
		if (matrix[i] != ' ')
			counter--;
		i++;
	}
	return (counter);
}
