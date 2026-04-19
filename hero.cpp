#include "Hero.h"

Hero::Hero(std::string n, int v, int a) : Creature("Hero", v, a), defendendo(false) {}

int Hero::realizarAtaque(){
    return ataque;
}

void Hero::receberDano(int dano){
    if(defendendo){
        int danoReduzido = dano / 2;
        vida -= danoReduzido;
        defendendo = false;
    }
    else{
        vida -= dano;
    }
}

void Hero::setDefesa(bool status){
    defendendo = status;
}

bool Hero::estaDefendendo() const{
    return defendendo;
}