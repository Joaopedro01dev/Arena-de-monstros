#include "Ogre.h"
#include <cstdlib>
#include <iostream>

Ogre::Ogre() : Creature("Ogro", 100, 20){}

int Ogre::realizarAtaque(){
    if((rand() % 10) > 7){
        std::cout << "\nO Ogro usa seu ataque especial! La vem dano extra!\n";
        return ataque * 1.5;
    }

    std::cout << "\nO Ogro tem ataques muito fortes! Tome cuidado dobrado!\n";
    return ataque;
}

void Ogre::receberDano(int dano){
    vida -= dano;
    std::cout << "\nOgros tem uma pele muito grossa, continue!\n";
}