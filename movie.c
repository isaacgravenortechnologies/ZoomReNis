#include "raylib.h"
#include "variables.h"
#include <stdio.h>
#define INTRO_ENG_NOC 0
Texture introTexture;
void playMovie(int movie) {
        if(movie==INTRO_ENG_NOC)
        if(!(IsSoundPlaying(introSound))) PlaySound(introSound);
        sprintf(path, "./resources/movie/intro/eng_no_c/frames/frame%04d.jpg",frameCount);
        introTexture=LoadTexture(path);
}