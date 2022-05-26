#include "ttt.h"

void	ft_red(char *str)
{
	printf("\033[0;31m%s\033[0m", str);
}

void	ft_green(char *str)
{
	printf("\033[0;32m%s\033[0m", str);
}

void	ft_yellow(char *str)
{
	printf("\033[0;33m%s\033[0m", str);
}

void	ft_white(char *str)
{
	printf("\033[0;37m%s\033[0m", str);
}

void	ft_whiteb(char *str)
{
	printf("\033[1;37m%s\033[0m", str);
}
