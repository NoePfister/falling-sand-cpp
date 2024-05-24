#include "../bin/raylib.h"

#ifndef game_h
#define game_h

class Game{
private:
    int _screen_height = 1000;
    int _screen_width = 1000;


public:
    void setup();
    void loop();
    void end();
};



#endif