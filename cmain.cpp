#include "cmain.h"

CMain::CMain(int passed_ScreenWidth, int passed_ScreenHeight)
{
    //ctor
    ScreenWidth=passed_ScreenWidth;
    ScreenHeight=passed_ScreenHeight;
    quit = false;
    csdl_setup = new SDL_Setup(&quit,ScreenWidth,ScreenHeight);

    grass = new CSprite(csdl_setup->GetRenderer(),"fondo.png",0,0,ScreenWidth,ScreenHeight);
    player = new CSprite(csdl_setup->GetRenderer(),"player.png",100,100 ,32,32);

}

CMain::~CMain()
{
    delete csdl_setup;
    delete grass;
    delete player;

}

void CMain::GameLoop()
{
    while(!quit && csdl_setup->GetMainEvent()->type != SDL_QUIT)
        {
            csdl_setup->Begin();

            grass->Draw();
            player->Draw();

            csdl_setup->End();
        }
}
