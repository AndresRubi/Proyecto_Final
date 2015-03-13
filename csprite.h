#ifndef CSPRITE_H
#define CSPRITE_H

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"
using namespace std;

class CSprite
{
    public:
        CSprite(SDL_Renderer* passed_renderer,string FilePath,int x,int y, int w , int h);
        virtual ~CSprite();
        void Draw();
    protected:

    private:
    SDL_Texture* fondo, *player;
    SDL_Rect fondo_rect,player_rect;
    SDL_Renderer* renderer;

};

#endif // CSPRITE_H
