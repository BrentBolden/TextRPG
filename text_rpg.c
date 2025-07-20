#include <stdio.h>
#include "include/player.h"

int main()
{
	Player player;
	Player *p_point = &player;

	setHP(p_point, 50);
	setMP(p_point, 30);
	printStats(player);

    return 0;
}
