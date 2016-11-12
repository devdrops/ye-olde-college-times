#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{
initscr(); // limpando tela
    start_color(); // habilitando uso de cores

	int v1, v2;
	// pares de cor
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3,COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_WHITE, COLOR_BLACK);
	init_pair(6, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(7, COLOR_BLUE, COLOR_BLACK);
	init_pair(8, COLOR_YELLOW, COLOR_BLACK);

	// usando par de cor
	attrset(COLOR_PAIR(4));
    printw("Entre com um inteiro: ");
	scanw("%d\n", &v1);

	// usando par de cor
	attrset(COLOR_PAIR(5));
    printw("Entre com um inteiro: ");
	scanw("%d\n", &v2);

	// usando par de cor
	attrset(COLOR_PAIR(4));
	printw("Resultado: %d\n", v1 + v2);

	getch();
	// finalizando ncurses
	endwin();

    return 0;
}
