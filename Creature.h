#pragma once
#include <string>

class Creature{
protected:
    std::string nome;
    int vida;
    int ataque;

public:
    Creature(std::string n, int v, int a) : nome(n), vida(v), ataque(a){}

    virtual ~Creature(){}

    std::string getNome() const {return nome;}
    int getVida() const {return vida;}
    int getAtaque() const {return ataque;}

    bool estaVivo() const {return vida > 0;}

    virtual int realizarAtaque() = 0;
    virtual void receberDano(int dano) = 0;
};