#include "Enemigo.h"
#include <iostream>

#include "Personaje.h"

using namespace std;
Enemigo::Enemigo(SDL_Renderer* renderer)
{

    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 500;
    rect_textura.y = 10;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 550;
    rect_bala.y = 70;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_balase.size();i++)
        SDL_RenderCopy(renderer, textura_bala, NULL, &rect_balase[i]);
}

void Enemigo::logica()
{
    rect_textura.y+=3;


    for(int i=0;i<rect_balase.size();i++)
    rect_balase[i].x-=3;


    if(frame%30==0)
                {
                        SDL_Rect temp;
                        temp.x=rect_textura.x;
                        temp.y=rect_textura.y;
                        temp.w=rect_bala.w;
                        temp.h=rect_bala.h;
                        rect_balase.push_back(temp);
                }

















//        for(int j=0;j<rect_balase.size();j++)
//        {
//            SDL_Rect rect1 = rect_balase[j];
//            SDL_Rect rect2 = rect_textura;
//
//            if((rect1.x+rect1.w<rect2.x)==false//Muy a la izq
//                && (rect1.x>rect2.x+rect2.w)==false//Muy a la der
//                && (rect1.y+rect1.h<rect2.y)==false//Muy arriba
//                && (rect1.y>rect2.y+rect2.h)==false//Muy abajo
//               )
//            {
//                cout<<"Fin del Juego"<<endl;
//
////                cout<<j<<endl;
//////                delete[j] rect_balas;
////                rect_balas.push_back(j);
//                return;
//            }
//        }




















    if(rect_textura.y>400)
    {
        rect_textura.y=10;
        rect_textura.x+=-70;
    }

        frame++;

}

Enemigo::~Enemigo()
{
    //dtor
}
