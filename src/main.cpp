/*******************************************************************************************
 *
 *   raylib [core] example - Basic window
 *
 *   Welcome to raylib!
 *
 *   To test examples, just press F6 and execute raylib_compile_execute script
 *   Note that compiled executable is placed in the same folder as .c file
 *
 *   You can find all basic examples on C:\raylib\raylib\examples folder or
 *   raylib official webpage: www.raylib.com
 *
 *   Enjoy using raylib. :)
 *
 *   Example originally created with raylib 1.0, last time updated with raylib 1.0
 *
 *   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
 *   BSD-like license that allows static linking with closed source software
 *
 *   Copyright (c) 2013-2023 Ramon Santamaria (@raysan5)
 *
 ********************************************************************************************/

#include <raylib.h>
#include <iostream>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 640;
    const int screenHeight = 640;

    // Initializes Window
    InitWindow(screenWidth, screenHeight, "Contra te ipsum - A chess game");

    // Loads textures
    Texture2D bg_image = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/chessboard.png");
    Texture2D b_pawn = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png");
    Texture2D w_pawn = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png");
    Texture2D b_rook = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_rook.png");
    Texture2D w_rook = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_rook.png");
    Texture2D b_knight = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_knight.png");
    Texture2D w_knight = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_knight.png");
    Texture2D b_bishop = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_bishop.png");
    Texture2D w_bishop = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_bishop.png");
    Texture2D b_queen = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_queen.png");
    Texture2D w_queen = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_queen.png");
    Texture2D b_king = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_king.png");
    Texture2D w_king = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_king.png");
    // Sets our game to run at 60 frames-per-second
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        ClearBackground(BLANK);
        DrawTexture(bg_image, 0, 0, WHITE);
        for (int i = 0; i <= 7; i++)
        {
            DrawTextureEx(b_pawn, (Vector2){float(7 + 80 * i), 80}, 0.0f, 1.0f, WHITE);
            DrawTextureEx(w_pawn, (Vector2){float(7 + 80 * i), 480}, 0.0f, 1.0f, WHITE);
        }
        for (int i = 0; i < 2; i++)
        {
            DrawTexture(b_rook, float(3 + 560 * i), 1, WHITE);
            DrawTexture(w_rook, float(6 + 560 * i), 566, WHITE);
            DrawTexture(b_knight, float(83 + 400 * i), 5, WHITE);
            DrawTexture(w_knight, float(84 + 400 * i), 564, WHITE);
            DrawTexture(b_bishop, float(160 + 240 * i), 0, WHITE);
            DrawTexture(w_bishop, float(164 + 240 * i), 563, WHITE);
        }
        DrawTexture(b_queen, 240, 4, WHITE);
        DrawTexture(w_queen, 240, 565, WHITE);
        DrawTexture(b_king, 322, 2, WHITE);
        DrawTexture(w_king, 323, 563, WHITE);
        EndDrawing();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
