#include <raylib.h>
#include <iostream>

using namespace std;

Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int cellSize = 30;
int cellCount = 25;

class Food {
    public:
        Vector2 position = {5, 6};

        Food() {
            Image image = LoadImage("Graphics/food.png");
        }

        void Draw() {
            DrawRectangle(position.x*cellSize, position.y*cellSize, cellSize, cellSize, darkGreen);
        }
};


int main()
{
    cout<<"Hello World"<<endl;
    InitWindow(cellSize*cellCount, cellSize*cellCount, "Retro Snake Game");
    SetTargetFPS(60);

    Food food = Food();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        //Drawing
        ClearBackground(green);
        food.Draw();

        EndDrawing();
    }
    

    CloseWindow();
    return 0;
}