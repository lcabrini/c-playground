#include <raylib.h>

int main(int argc, char **argv) {
    const int screenWidth = 1024;
    const int screenHeight = 768;
    const char *title = "Ellises";
    const int midX = screenWidth / 2;
    const int midY = screenHeight / 2;

   SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(screenWidth, screenHeight, title);
    SetTargetFPS(60);

    int endRadius = 1;
    int step = 10;

    while (!WindowShouldClose()) {
        endRadius += step;
        if (endRadius > 350) endRadius = 350;

        BeginDrawing();
        ClearBackground(BLACK);

        for (int r = 0; r <= 350; ++r) {
            DrawEllipseLines(midX, midY, r, 350-r, RED);
        }

        for (int r = 0; r <= endRadius; r += step) {
            DrawEllipseLines(midX, midY, r, 350-r, WHITE);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}