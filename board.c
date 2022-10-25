#include "ttt.h"

//printf("\t    %s  |  %s  |  %s  \n", );

void	print_map(void)
{
	char **matrix = (char *[]){" ", " ", " ", " ", " ", " ", " ", " ", " "};
	int i;

	i = 0;
	while (i < 9)
	{
		matrix[i] = " ";
		i++;
	}
	printf("\n\n");
	printf("\t       |     |     \n");
	printf("\t    %s  |  %s  |  %s  \n", matrix[0], matrix[1], matrix[2]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %s  |  %s  |  %s  \n", matrix[3], matrix[4], matrix[5]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %s  |  %s  |  %s  \n", matrix[6], matrix[7], matrix[8]);
	printf("\t       |     |     \n");
	printf("\n\n\n");

	if ((matrix[0] == matrix[1] && matrix[1] == matrix[2])
		|| (matrix[3] == matrix[4] && matrix[4] == matrix[5])
		|| (matrix[6] == matrix[7] && matrix[7] == matrix[8])
		|| (matrix[0] == matrix[3] && matrix[3] == matrix[6])
		|| (matrix[1] == matrix[4] && matrix[4] == matrix[7])
		|| (matrix[2] == matrix[5] && matrix[5] == matrix[8])
		|| (matrix[0] == matrix[4] && matrix[4] == matrix[8])
		|| (matrix[6] == matrix[4] && matrix[4] == matrix[2]))
		printf("You Win!");
}
