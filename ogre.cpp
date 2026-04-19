#include "Ogre.h"
#include <cstdlib>

Ogre::Ogre() : Creature("Ogro", 100, 20){}

int Ogre::realizarAtaque(){
    if((rand() % 10) > 7){
        return ataque * 1.5;
    }

    return ataque;
}

void Ogre::receberDano(int dano){
    vida -= dano;
}