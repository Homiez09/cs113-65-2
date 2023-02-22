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
    (*player).hp -= damage;
    if ((*player).hp < 0) {
        (*player).hp = 0;
    }
}
typedef int cm;

int main(void) {
    cm length = 45;

    // declare struct variable
    GamePlayer player1;
    struct GamePlayer__ player2;
    strcpy(player1.name, "Phum");
    player1.maxHp = 100; // member access operator
    player1.hp = 100;
    strcpy(player2.name, "Phum2");
    player2.maxHp = 100; // member access operator
    player2.hp = 100;

    takeDamage(&player1, 10);
    takeDamage(&player2, 15);

    printGamePlayer(player1);
    printGamePlayer(player2);
}