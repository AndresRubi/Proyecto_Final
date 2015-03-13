#ifndef CMAIN_H
#define CMAIN_H

#include "sdl_setup.h"
#include "csprite.h"

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"
using namespace std;

class CMain
{
    public:
        CMain(int passed_ScreenWidth, int passed_ScreenHeight);
        virtual ~CMain();
        void GameLoop();



    protected:

    private:
    int ScreenWidth,ScreenHeight;
    bool quit;

    CSprite* grass, *player;

    SDL_Setup* csdl_setup;

};

#endif // CMAIN_H
