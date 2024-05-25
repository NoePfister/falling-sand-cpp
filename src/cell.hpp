
#ifndef cell_h
#define cell_h

#include <iostream>
#include <vector>
#include "game.hpp"


class Game;
class Cell{
private:
    std::vector<int> _pos;
    int _type;
    Game* _game;

public:
    Cell(Game*, std::vector<int>, int);

    void draw_cell();
    void update_cell();

};

#endif 