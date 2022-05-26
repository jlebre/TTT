#include "ttt.h"

void tutorial(void)
{
    int b;

    system("clear");
	printf("\n\n\tWELCOME TO THE TUTORIAL\n\n");
    //basic rules
	printf("\t     |     |     \n");
	printf("\t  1  |  2  |  3  \n");
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  4  |  5  |  6  \n");
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  7  |  8  |  9  \n");
	printf("\t     |     |     \n");
	printf("\n\n\n");
    printf("\tWhat do you want to do?\n\n");
    printf("\t1 - RETURN TO MENU\n");
    printf("\t2 - PLAY\n");
    printf("\t3 - EXIT\n\n");
    scanf("%d", &b);
    while (b != '1' && b != '2' && b != '2')
    {
        b = getchar();
        while (getchar() != '\n')
            getchar();
        if (b == '1')
            menu();
        else if (b == '2')
            mode();
        else if (b == '3')
            exit (EXIT_FAILURE);
        else
            printf("Invalid Option, Try Again!\n\n");
    }
}
