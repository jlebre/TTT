#include "ttt.h"

void tutorial(void)
{
    int a;

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
    printf("What do you want to do?");
    printf("1 - RETURN TO MENU\n");
    printf("2 - PLAY\n");
    printf("3 - EXIT\n");
    while (a != 1 || a != 2 || a != 3)
    {
        a = scanf(a);
        if (a == 1)
            menu();
        else if (a == 2)
            play();
        else if (a == 3)
            return (0);
        else
            printf("Invalid Option! What do you want to do?");
            printf("1 - RETURN TO MENU\n");
            printf("2 - PLAY\n");
            printf("3 - EXIT\n");
    }
}