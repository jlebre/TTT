#include "ttt.h"

int main (void)
{
    init();
}

/*
if jogada impar jogam as X
if jogada par jogam as O
if ((n_jogada/2) * 2 != n_jogada) -> jogam as X
if ((n_jogada/2) * 2 == n_jogada) -> jogam as O
*/