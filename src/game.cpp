#include "game.hpp"


void Game::setup(){
    InitWindow(Game::_screen_width, Game::_screen_height, "Hello, Raylib!");
    SetTargetFPS(60);  

    Game::_cells[5][5]=1;
}

void Game::loop(){
        while (!WindowShouldClose()) {
        // Zeichnen
        BeginDrawing();
        ClearBackground(BLACK);

        Game::_draw_cells();
        
        EndDrawing();
    }
}

void Game::_draw_cells(){
    
    for (int x = 0; x < Game::_cell_count_x; x++) {
        for (int y = 0; y < Game::_cell_count_y; y++) {
            if(Game::_cells[x][y]==1){
                DrawRectangle(x*Game::_cell_width,y*Game::_cell_height,Game::_cell_width,Game::_cell_height,RAYWHITE);
            }else{
                DrawRectangle(x*Game::_cell_width,y*Game::_cell_height,Game::_cell_width,Game::_cell_height,BLACK);
            }
            
        }
    }
}

void Game::end(){
    CloseWindow();
}