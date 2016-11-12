#include <stdio.h>
#include <stdlib.h>
#include <curses.h>


int main()
{
    // Inicia NCurses
    initscr();
    // Imprime na tela
    addstr("Teste de ncurses");
    // Atualiza a tela
    refresh();
    // Usando getch
    getch();
    // Finaliza
    endwin();

    printf("Hello world!\n");
    return 0;
}
