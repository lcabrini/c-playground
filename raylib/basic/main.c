#include <raylib.h>

int main(int argc, char **argv)
{
    const int screenWidth = 1024;
    const int screenHeight = 768;
    const char *title = "Basic";

    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(screenWidth, screenHeight, title);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}