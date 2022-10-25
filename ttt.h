#ifndef TTT_H
# define TTT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int         main (void);
void        print_map(void);
void        mode(void);
void        menu(void);
void        init(void);
void        play(void);
void        play1(void);
void        play2(void);

//TUTORIAL
void        tutorial(void);

//COLORS
void        ft_red(char *str);
void        ft_green(char *str);
void        ft_yellow(char *str);
void        ft_white(char *str);
void        ft_whiteb(char *str);


#endif