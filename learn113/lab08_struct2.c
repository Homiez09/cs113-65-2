#include <stdio.h>
#include <string.h>

// define struct
struct GamePlayer__ {
    char name[20];
    int maxHp;
    int hp;
}; 

typedef struct GamePlayer__ GamePlayer;

// ------------------------------------------------------------
void printGamePlayer(GamePlayer player) {
    printf("Name: %s\n", player.name);
    printf("HP: %d/%d\n", player.hp, player.maxHp);
}


void takeDamage(GamePlayer *player, int damage) {
    //player->hp -= damage;
    player->hp -= damage;
    if (player->hp < 0) {
        player->hp = 0;
    }
}

void findTopGamePlayerMaxHp(GamePlayer players[], int size, GamePlayer **topMaxHp) {
    *topMaxHp = &players[0];
    for (int i = 1; i < size; ++i) {
        if (players[1].maxHp > (*topMaxHp)->maxHp) {
            *topMaxHp = &players[i];
        }
    }
}

int main() {
    GamePlayer players[10], *topMaxHp;
    int size = 4;

    strcpy(players[0].name, "Phum");
    strcpy(players[1].name, "Phum2");
    strcpy(players[2].name, "Phum3");
    strcpy(players[3].name, "Phum4");

    players[0].maxHp = 1000;
    players[1].maxHp = 10;
    players[2].maxHp = 1001;
    players[3].maxHp = 1;

    for (int i = 0; i < size; ++i) {
        players[i].hp = players[i].maxHp;
    }

    findTopGamePlayerMaxHp(players, size, &topMaxHp);
    
    printGamePlayer(*topMaxHp);
}