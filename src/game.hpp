

#ifndef game_h
#define game_h

#include "../bin/raylib.h"
#include "cell.hpp"

class Cell;
class Game{
private:
    int _screen_height = 1000;
    int _screen_width = 1000;
    int _cell_count_x = 100;
    int _cell_count_y = 100;
    


    void _draw_cells();


public:
    void setup();
    void loop();
    void end();

    int cell_height = _screen_height/_cell_count_x;
    int cell_width = _screen_width/_cell_count_x;

    Cell* cells[100][100];
    Cell* cells_new[100][100];


};



#endif