#include "ttt.h"

int menu(void)
{
    int a;

    printf("\tMENU\n\n");
    printf("(choose one option)");
    printf("1 - TUTORIAL\n");
    printf("2 - PLAY\n");
    printf("3 - EXIT\n");
    while (a != 1 || a != 2 || a != 3)
    {
        a = scanf(a);
        if (a == 1)
            tutorial();
        else if (a == 2)
            play();
        else if (a == 3)
            return (0);
        else
            printf("Invalid Option, Try Again!");
    }
}