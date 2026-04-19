#pragma once
#include "Creature.h"

class Goblin : public Creature{
public:
    Goblin();

    int realizarAtaque() override;
    void receberDano(int dano) override;
};