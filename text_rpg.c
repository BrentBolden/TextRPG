#include <stdio.h>
#include "include/player.h"
#include <ncurses.h>

int main()
{
	Player player;
	Player *p_point = &player;
	int ch;
		
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();

	setHP(p_point, 50);
	setMP(p_point, 30);
	printStats(player);
	
	printw("Type any char to see in bold\n");
	ch = getch();

	printw("Key pressed is ");
	addch(ch | A_BOLD | A_UNDERLINE | A_BLINK);
	printw("\n");
	refresh();


	printw("Press any key to exit curses mode...\n");
        getch();
        endwin();

    	return 0;
}
