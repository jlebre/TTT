#include <stdio.h>
#include <stdlib.h>

void print_map(void)
{
	printf("\n\n\t   TIC TAC TOE\n\n");
	printf("\t     |     |     \n");
	printf("\t     |     |     \n");
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t     |     |     \n");
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t     |     |     \n");
	printf("\t     |     |     \n");
	printf("\n\n\n");
}
/*
int	win(void)
{
	if ((A1 && A2 && A3) || (B1 && B2 && B3) || (C1 && C2 && C3)
			|| (A1 && B1 && C1) || (A2 && B2 && C2) || (A3 && B3 && C3)
			|| (A1 && B2 && C3) || (A3 && B2 && C1))
	{
		printf("You Win!");
		return (1);
	}	
	return (0);
}

/*
	 123
	A
	B
	C

*/

int main(void)
{
	print_map();
	//while (!win())
	return (0);
}
