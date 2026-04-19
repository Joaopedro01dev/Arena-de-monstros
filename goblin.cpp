#include "Goblin.h"
#include <iostream>

Goblin::Goblin() : Creature("Goblin", 40, 8){}

int Goblin::realizarAtaque(){
    std::cout << "\nO Goblin tem ataques muito rapidos! Fique esperto para nao receber dano!\n"; 
    return ataque;
}

void Goblin::receberDano(int dano){
    std::cout << "\nGoblins tem pouca vida, aproveite essa oportunidade!\n";
    vida -= dano;
}