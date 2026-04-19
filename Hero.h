#pragma once
#include "Creature.h"

class Hero : public Creature{
private:
    bool defendendo;

public:
    Hero(std::string nome, int vida, int ataque);

    int realizarAtaque() override;
    void receberDano(int dano) override;

    void setDefesa(bool status);
    bool estaDefendendo() const;
};