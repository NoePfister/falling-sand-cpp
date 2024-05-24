#include "game.h"


void Game::setup(){
    InitWindow(Game::_screen_width, Game::_screen_height, "Hello, Raylib!");
}

void Game::loop(){
        while (!WindowShouldClose()) {
        // Zeichnen
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
}

void Game::end(){
    CloseWindow();
}