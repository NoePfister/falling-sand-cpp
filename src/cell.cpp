#include "cell.hpp"

Cell::Cell(Game *game, std::vector<int> pos, int type){
    _game = game;
    _pos = pos;
    _type = type;
}

void Cell::update_cell(){
    // check if cell under this cell is free. If yes, go down, else stay where you are.
    if(_game->cells[_pos[0]][_pos[1]+1]->_type==0){
        _pos[1] += 1;
    }
}

void Cell::draw_cell(){

    DrawRectangle(_pos[0]*_game->cell_width,_pos[1]*_game->cell_height,_game->cell_width,_game->cell_height,RAYWHITE);


}