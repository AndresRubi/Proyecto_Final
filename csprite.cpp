#include "csprite.h"

CSprite::CSprite(SDL_Renderer* passed_renderer,string FilePath,int x,int y, int w , int h)
{
    //ctor

    renderer=passed_renderer;
    fondo=NULL;
    fondo=IMG_LoadTexture(renderer,FilePath.c_str());
    fondo_rect.x = x;
    fondo_rect.y = y;
    fondo_rect.w = w;
    fondo_rect.h = h;

    if(fondo == NULL)
    {
        cout<<"no pudo cargar el fondo"<<FilePath<<endl;
    }

}

CSprite::~CSprite()
{
    SDL_DestroyTexture(fondo);
    SDL_DestroyTexture(player);
}

void CSprite::Draw()
{
    SDL_RenderCopy(renderer,fondo,NULL,&fondo_rect);
}
