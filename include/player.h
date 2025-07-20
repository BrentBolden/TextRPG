#include <stdio.h>

typedef struct {
        int hp;
        int mp;
} Player;

void printStats(Player player);
void setHP(Player *player, int var);
void setMP(Player *player, int var);

