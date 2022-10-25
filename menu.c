#include "ttt.h"

void mode(void)
{
	char	a;

	system("clear");
	printf("\t(choose one option)\n\n");
	printf("\t1 - MULTIPLAYERS\n\n");
	printf("\t2 - VS. PC\n\n");
	while (1)
	{
		a = getchar();
		if (a == '1')
		{
			play1();
			break ;
		}
		else if (a == '2')
		{
			play2();
			break ;
		}
	}
}

void menu(void)
{
	char a;

	system("clear");
	ft_whiteb("\t\tMENU\n\n");
	printf("\t(choose one option)\n\n");
	ft_yellow("\t1 - TUTORIAL\n\n");
	ft_green("\t2 - PLAY\n\n");
	ft_red("\t3 - EXIT\n\n");
	while (1)
	{
		a = getchar();
		if (a == '1')
		{
			tutorial();
			break ;
		}
		else if (a == '2')
		{
			mode();
			break ;
		}
		else if (a == '3')
			exit (0);
	}
}
