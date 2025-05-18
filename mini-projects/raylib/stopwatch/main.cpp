#include <raylib.h>
#include <ctime>

constexpr int width{1270};
constexpr int height{720}; 

int main() {
    InitWindow(width, height, "Caption");
    SetTargetFPS(360);
    while (WindowShouldClose() == false) {
        BeginDrawing();
        // Update

        // Draw
        ClearBackground(RAYWHITE);


        EndDrawing();
    }
    CloseWindow();   
    return 0;
}