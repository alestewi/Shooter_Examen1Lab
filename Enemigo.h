#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Personaje.h"
#include <vector>
#include <list>


class Enemigo : public Personaje
{
    public:
        std::vector<SDL_Rect> rect_balase;
        void dibujar();
        void logica();


        Enemigo(SDL_Renderer* renderer);
        virtual ~Enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
