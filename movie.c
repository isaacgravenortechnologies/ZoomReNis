#include "raylib.h"
#include "variables.h"
Texture introTexture;
void playMovie() {
        if(!(IsSoundPlaying(introSound))) PlaySound(introSound);
        sprintf(path, "./resources/movie/intro/eng_no_c/frames/frame%04d.jpg",frameCount);
        introTexture=LoadTexture(path);
}