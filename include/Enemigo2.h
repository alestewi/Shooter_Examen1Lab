#ifndef ENEMIGO2_H
#define ENEMIGO2_H

#include "Personaje.h"
#include <vector>


class Enemigo2 : public Personaje
{
    public:
        void dibujar();
        void logica();


        Enemigo2(SDL_Renderer* renderer);
        virtual ~Enemigo2();
    protected:
    private:
};

#endif // ENEMIGO_H


#endif // ENEMIGO2_H
