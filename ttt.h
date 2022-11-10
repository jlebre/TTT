#ifndef TTT_H
# define TTT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <time.h>

int		freespaces(char *matrix);
void	player1(char *matrix);
void	player2(char *matrix);
void	print_board(char *matrix);
void	reset_board(char *matrix);
char	check_winner(char *matrix);
void	print_winner(char winner);

//Normal Colors
int		black(char *str);
int		red(char *str);
int		green(char *str);
int		yellow(char *str);
int		blue(char *str);
int		purple(char *str);
int		cyan(char *str);
int		white(char *str);
//Bold
int		bold_black(char *str);
int		bold_red(char *str);
int		bold_green(char *str);
int		bold_yellow(char *str);
int		bold_blue(char *str);
int		bold_purple(char *str);
int		bold_cyan(char *str);
int		bold_white(char *str);

#endif
