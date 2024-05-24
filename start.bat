
REM add .dll with prefix -l and remove ending
REM add cpp or hpp file at end
g++ -o main -Isrc -Ibin -L. -lraylib src/main.cpp bin/raylib.h bin/raymath.h bin/rlgl.h src/game.cpp src/game.hpp

main.exe

del main.exe

