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
#include <array>
#include <string>

using namespace std;

// Chess piece class

class chess_Piece
{
    public:
        
        Texture2D texture;
        int Xpos = 0, Ypos = 0;
        Color color_name;
        bool isBlack;
        

};

class Pawn : public chess_Piece {

    public:
        Pawn(bool x, const char* y, int z, int a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }

};

class Rook : public chess_Piece {

    public:
        Rook(bool x, const char* y, int z, int a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }
};

class Knight : public chess_Piece {

    public:
        Knight(bool x, const char* y, int z, int a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }

};

class Bishop : public chess_Piece {

    public:
        Bishop(bool x, const char* y, int z, int a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }

};

class Queen : public chess_Piece {

    public:
        Queen(bool x, const char* y, int z, int a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }

};

class King : public chess_Piece {

    public:
        King(bool x, const char* y, float z, float a, Color b){
            isBlack = x;
            texture = LoadTexture(y);
            Xpos = z;
            Ypos = a;
            color_name = b;
        }
};

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 640;
    const int screenHeight = 640;

    // Initializes Window
    InitWindow(screenWidth, screenHeight, "Contra te ipsum - A chess game");

    //Instantiates classes
    
    Texture2D bg_image = LoadTexture("C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/chessboard.png");

    // Pawns
    
    Pawn b_pawn1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 7, 80, WHITE);
    Pawn b_pawn2(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 87, 80, WHITE);
    Pawn b_pawn3(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 167, 80, WHITE);
    Pawn b_pawn4(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 247, 80, WHITE);
    Pawn b_pawn5(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 327, 80, WHITE);
    Pawn b_pawn6(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 407, 80, WHITE);
    Pawn b_pawn7(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 487, 80, WHITE);
    Pawn b_pawn8(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_pawn.png", 567, 80, WHITE); 
    Pawn w_pawn1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 7, 480, WHITE);
    Pawn w_pawn2(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 87, 480, WHITE);
    Pawn w_pawn3(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 167, 480, WHITE);
    Pawn w_pawn4(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 247, 480, WHITE);
    Pawn w_pawn5(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 327, 480, WHITE);
    Pawn w_pawn6(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 407, 480, WHITE);
    Pawn w_pawn7(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 487, 480, WHITE);
    Pawn w_pawn8(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_pawn.png", 567, 480, WHITE); 
    
    // Rooks
    Rook b_rook1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_rook.png", 3, 1, WHITE);
    Rook b_rook2(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_rook.png", 563, 1, WHITE);
    Rook w_rook1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_rook.png", 6, 566, WHITE);
    Rook w_rook2(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_rook.png", 566, 566, WHITE);

    // Knights
    Knight b_knight1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_knight.png", 83, 5, WHITE);
    Knight b_knight2(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_knight.png", 483, 5, WHITE);
    Knight w_knight1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_rook.png", 84, 564, WHITE);
    Knight w_knight2(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_rook.png", 484, 564, WHITE);

    // Bishops
    Bishop b_bishop1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_bishop.png", 160, 0, WHITE);
    Bishop b_bishop2(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_bishop.png", 400, 0, WHITE);
    Bishop w_bishop1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_bishop.png", 164, 563, WHITE);
    Bishop w_bishop2(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_bishop.png", 404, 563, WHITE);

    // Queens
    Queen b_queen1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_queen.png", 240, 4, WHITE);
    Queen w_queen1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_queen.png", 240, 565, WHITE);

    // Kings
    King b_king1(true, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/b_king.png", 322, 2, WHITE);
    King w_king1(false, "C:/Users/HP/Desktop/c++ projects/GMTK Game Jam 2023/src/Chess_images/game_images/w_king.png", 323, 563, WHITE);
    
    Rectangle b_pawn1_rec = {b_pawn1.Xpos, b_pawn1.Ypos, b_pawn1.texture.width, b_pawn1.texture.height};
    
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
        DrawTexture(bg_image, 0, 0, WHITE); // Draws the chessboard

        // Drawing the Pawns
        

        DrawTexture(b_pawn1.texture, b_pawn1.Xpos, b_pawn1.Ypos, b_pawn1.color_name);
        DrawTexture(b_pawn2.texture, b_pawn2.Xpos, b_pawn2.Ypos, b_pawn2.color_name);
        DrawTexture(b_pawn3.texture, b_pawn3.Xpos, b_pawn3.Ypos, b_pawn3.color_name);
        DrawTexture(b_pawn4.texture, b_pawn4.Xpos, b_pawn4.Ypos, b_pawn4.color_name);
        DrawTexture(b_pawn5.texture, b_pawn5.Xpos, b_pawn5.Ypos, b_pawn5.color_name);
        DrawTexture(b_pawn6.texture, b_pawn6.Xpos, b_pawn6.Ypos, b_pawn6.color_name);
        DrawTexture(b_pawn7.texture, b_pawn7.Xpos, b_pawn7.Ypos, b_pawn7.color_name);
        DrawTexture(b_pawn8.texture, b_pawn8.Xpos, b_pawn8.Ypos, b_pawn8.color_name);
        DrawTexture(w_pawn1.texture, w_pawn1.Xpos, w_pawn1.Ypos, w_pawn1.color_name);
        DrawTexture(w_pawn2.texture, w_pawn2.Xpos, w_pawn2.Ypos, w_pawn2.color_name);
        DrawTexture(w_pawn3.texture, w_pawn3.Xpos, w_pawn3.Ypos, w_pawn3.color_name);
        DrawTexture(w_pawn4.texture, w_pawn4.Xpos, w_pawn4.Ypos, w_pawn4.color_name);
        DrawTexture(w_pawn5.texture, w_pawn5.Xpos, w_pawn5.Ypos, w_pawn5.color_name);
        DrawTexture(w_pawn6.texture, w_pawn6.Xpos, w_pawn6.Ypos, w_pawn6.color_name);
        DrawTexture(w_pawn7.texture, w_pawn7.Xpos, w_pawn7.Ypos, w_pawn7.color_name);
        DrawTexture(w_pawn8.texture, w_pawn8.Xpos, w_pawn8.Ypos, w_pawn8.color_name);

        
        // Drawing the Rooks
        
        DrawTexture(b_rook1.texture, b_rook1.Xpos, b_rook1.Ypos, b_rook1.color_name);
        DrawTexture(b_rook2.texture, b_rook2.Xpos, b_rook2.Ypos, b_rook2.color_name);
        DrawTexture(w_rook1.texture, w_rook1.Xpos, w_rook1.Ypos, w_rook1.color_name);
        DrawTexture(w_rook2.texture, w_rook2.Xpos, w_rook2.Ypos, w_rook2.color_name);
        
        
        // Drawing the Knights
        
        DrawTexture(b_knight1.texture, b_knight1.Xpos, b_knight1.Ypos, b_knight1.color_name);
        DrawTexture(b_knight2.texture, b_knight2.Xpos, b_knight2.Ypos, b_knight2.color_name);
        DrawTexture(w_knight1.texture, w_knight1.Xpos, w_knight1.Ypos, w_knight1.color_name);
        DrawTexture(w_knight2.texture, w_knight2.Xpos, w_knight2.Ypos, w_knight2.color_name);
        
        
        // Drawing the Bishops

        DrawTexture(b_bishop1.texture, b_bishop1.Xpos, b_bishop1.Ypos, b_bishop1.color_name);
        DrawTexture(b_bishop2.texture, b_bishop2.Xpos, b_bishop2.Ypos, b_bishop2.color_name);
        DrawTexture(w_bishop1.texture, w_bishop1.Xpos, w_bishop1.Ypos, w_bishop1.color_name);
        DrawTexture(w_bishop2.texture, w_bishop2.Xpos, w_bishop2.Ypos, w_bishop2.color_name);
        
        
        // Drawing the Queens

        DrawTexture(b_queen1.texture, b_queen1.Xpos, b_queen1.Ypos, b_queen1.color_name);
        DrawTexture(w_queen1.texture, w_queen1.Xpos, w_queen1.Ypos, w_queen1.color_name);

        
        // Drawing the Kings

        DrawTexture(b_king1.texture, b_king1.Xpos, b_king1.Ypos, b_king1.color_name);
        DrawTexture(w_king1.texture, w_king1.Xpos, w_king1.Ypos, w_king1.color_name);
        
        EndDrawing();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
