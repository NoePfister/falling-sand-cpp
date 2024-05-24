#include <iostream>
#include "game.h"
#include "raylib.h"

int main() {
 
    Game *game = new Game();

    game->setup();
    game->loop();
    game->end();

    return 0;
}



