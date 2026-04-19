#include "Goblin.h"

Goblin::Goblin() : Creature("Goblin", 40, 8){}

int Goblin::realizarAtaque(){
    return ataque;
}

void Goblin::receberDano(int dano){
    vida -= dano;
}