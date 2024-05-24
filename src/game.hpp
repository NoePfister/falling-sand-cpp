#include "../bin/raylib.h"

#ifndef game_h
#define game_h

class Game{
private:
    int _screen_height = 1000;
    int _screen_width = 1000;
    int _cell_count_x = 100;
    int _cell_count_y = 100;
    int _cells[100][100];
    int _cell_height = _screen_height/_cell_count_x;
    int _cell_width = _screen_width/_cell_count_x;

    void _draw_cells();


public:
    void setup();
    void loop();
    void end();
};



#endif