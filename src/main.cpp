#include <raylib.h>
#include <iostream>

using namespace std;

Color green = {173, 204, 96, 255};
Color red = {43, 51, 24, 255};

int main()
{
    cout<<"Hello World"<<endl;
    InitWindow(750, 750, "Retro Snake Game");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        //Drawing
        ClearBackground(green);
        
        EndDrawing();
    }
    

    CloseWindow();
    return 0;
}