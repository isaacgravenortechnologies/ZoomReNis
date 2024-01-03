#include "raylib.h"
const int screenWidth = 1280;
const int screenHeight = 720;
int frameCount=1;
char path[60];
int fpsTarget = 29;
int i=0;
char gameName[100];
char gameNamePath[100];
Sound introSound;
char readString[100];
void initVars() {
    introSound = LoadSound("./zoombinis/movie/intro/eng_no_c/audio/intro.wav");
}