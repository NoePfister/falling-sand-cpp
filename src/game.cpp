#include "game.hpp"


void Game::setup(){
    InitWindow(Game::_screen_width, Game::_screen_height, "Hello, Raylib!");
    SetTargetFPS(60); 

    for (int x = 0; x < Game::_cell_count_x; x++) {
        for (int y = 0; y < Game::_cell_count_y; y++) {
            this->cells[x][y] = new Cell(this, std::vector({5,5}),0);
            
        }
    }

    this->cells[5][5] = new Cell(this,std::vector({5,5}),1);

}

void Game::loop(){
        while (!WindowShouldClose()) {

        this->update();
        // Zeichnen
        BeginDrawing();
        ClearBackground(BLACK);

        this->_draw_cells();
        
        EndDrawing();
    }
}

void Game::update(){
    for (int x = 0; x < Game::_cell_count_x; x++) {
        for (int y = 0; y < Game::_cell_count_y; y++) {
            this->cells[x][y]->update_cell();
            
        }
    }
}

void Game::_draw_cells(){
    
    for (int x = 0; x < Game::_cell_count_x; x++) {

        for (int y = 0; y < Game::_cell_count_y; y++) {

            this->cells[x][y]->draw_cell();
            
        }
    }
}

void Game::end(){
    CloseWindow();
}