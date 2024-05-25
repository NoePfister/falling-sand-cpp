#include <iostream>
#include "../bin/raylib.h"
#include "game.hpp"

int main() {
 
    std::cout << "Initializing Game" << std::endl;
    Game game = Game();


    game.setup();
    game.loop();
    game.end();

    return 0;
}



