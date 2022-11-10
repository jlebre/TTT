#include "ttt.h"

void	print_board(char *matrix)
{
	printf("\n\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[6], matrix[7], matrix[8]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[3], matrix[4], matrix[5]);
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t    %c  |  %c  |  %c  \n", matrix[0], matrix[1], matrix[2]);
	printf("\t       |     |     \n");
	printf("\n\n\n");
}
