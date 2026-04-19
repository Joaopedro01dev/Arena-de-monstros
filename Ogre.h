#pragma once
#include "Creature.h"

class Ogre : public Creature{
public:
    Ogre();

    int realizarAtaque() override;
    void receberDano(int dano) override;
};