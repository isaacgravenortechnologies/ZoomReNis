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

#include "raylib.h"
#include "variables.h"
#include <stdio.h>
#include "init.h"
#include "movie.h"
#include "file.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(int argc, char **argv)
{
    if(argc>0) {
        for(i=0;i<100;i++) {
            gameName[i]=argv[i];
        }
    }
    else {
        for(i=0;i<100;i++) {
            gameName[i]="zoombinis"[i];
        }
    }
    // Initialization
    //--------------------------------------------------------------------------------------
    sprintf(gameNamePath, "./%s/name",gameName);
    readFile(gameNamePath);
    InitWindow(screenWidth, screenHeight, "Zoombinis - Unity version demake");
    InitAudioDevice();
    SetTargetFPS(fpsTarget);               // Set our game to run at 30 frames-per-second
    initVars();
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        playMovie(INTRO_ENG_NOC);
        frameCount++;
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(introTexture,0,0,WHITE);
        EndDrawing();
        UnloadTexture(introTexture);
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}