#include "ttt.h"

void    init(void)
{
    system("clear");
    printf("\n\n");
	printf("\t       |     |     \n");
	printf("\t       |     |     \n");
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	ft_whiteb("\tWELCOME TO TIC TAC TOE\n");
	printf("\t  _____|_____|_____\n");
	printf("\t       |     |     \n");
	printf("\t       |     |     \n");
	printf("\t       |     |     \n");
	printf("\n\n\n");
    printf("Press ENTER to Continue!\n");
    getchar();
    menu();
}
