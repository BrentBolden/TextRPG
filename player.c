#include "include/player.h"
#include <ncurses.h>

void printStats(Player player)
{
	
	//printf("\033[31mHP:\033[m %d\n\033[36mMP:\033[m %d\n", player.hp, player.mp);
	
	printw("STATS: \n");
	printw("HP:%d\nMP:%d\n", player.hp, player.mp);
	refresh();
}



void setHP(Player *player, int var)
{
	player->hp = var;
	if(player->hp < 0)
		player->hp = 0;
}

void setMP(Player *player, int var)
{
        player->mp = var;
        if(player->mp < 0)
                player->mp = 0;
        
}     
