#include "include/player.h"


void printStats(Player player)
{
	printf("HP: %d\nMP: %d\n", player.hp, player.mp);
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
