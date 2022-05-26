#include "ttt.h"

//printf("\t    %c  |  %c  |  %c  \n", );

void	print_map(void)
{
	char matrix[3][3] = {
		{'\s', '\s', '\s'},
		{'\s', '\s', '\s'},
		{'\s', '\s', '\s'},
	};

	printf("\n\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[0][0], matrix[0][1], matrix[0][2]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[1][0], matrix[1][1], matrix[1][2]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[2][0], matrix[2][1], matrix[2][2]);
	printf("\t       |     |     \n");
	printf("\n\n\n");

	if ((matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
		|| (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
		|| (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
		|| (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
		|| (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
		|| (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
		|| (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
		|| (matrix[2][0] == matrix[1][1] && matrix[1][1] == matrix[0][2]))
		printf("You Win!");
}
