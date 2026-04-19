#include <iostream>
#include <vector>
#include <cstdlib>
#include "Creature.h"
#include "Hero.h"
#include "Ogre.h"
#include "Goblin.h"
using namespace std;

int main(){
    cout << "Para iniciarmos, digites as informacoes sobre o Heroi\n";
    string nome;
    int vida, ataque;

    cout << "NOME: ";
    getline(cin, nome);
    cout << "VIDA: ";
    cin >> vida;
    cout << "ATAQUE: ";
    cin >> ataque;

    Hero jogador(nome, vida, ataque);
    vector<Creature*> inimigos;
    inimigos.push_back(new Goblin());
    inimigos.push_back(new Ogre());
    inimigos.push_back(new Goblin());

    for(Creature* monstro : inimigos){
        if(!jogador.estaVivo()) break;

        cout << "\n========================================\n";
        cout << "Um " << monstro->getNome() << " selvagem aparece!\n\n";

        while(jogador.estaVivo() && monstro->estaVivo()){
            cout << "Sua vida: " << jogador.getVida() << " | Vida do " << monstro->getNome() << ": " << monstro->getVida() << "\n";
            cout << "Escolha sua acao:\n1. Atacar\n2. Defender\n";
            cout << "> ";
            int escolha;
            cin >> escolha;

            if(escolha == 1){
                int dano = jogador.realizarAtaque();
                monstro->receberDano(dano);

                cout << "Voce ataca o " << monstro->getNome() << " causando " << dano << " de dano!\n";
            }
            else{
                jogador.setDefesa(true);
                cout << "Voce levanta seu escudo!\n";
            }

            if(monstro->estaVivo()){
                int acaoAleatoria = rand() % 2;

                if(acaoAleatoria == 0){
                    int danoMonstro = monstro->realizarAtaque();
                    jogador.receberDano(danoMonstro);
                    cout << "O " << monstro->getNome() << " ataca voce causando " << danoMonstro << " de dano!\n";
                }
                else{
                    cout << "Sorte a sua! O " << monstro->getNome() << " esta te encarando e preparando o proximo golpe!\n";
                }
            }
        }

        if(jogador.estaVivo()){
            cout << "Voce derrotou o " << monstro->getNome() << "!\n";
        }
        else{
            cout << "\nVoce foi derrotado...  Fim de jogo!\n";
        }
    }

    if(jogador.estaVivo()){
        cout << "PARABENS! Voce derrotou todos os monstros!\n\n";
    }

    for(Creature* m : inimigos){
        delete m;
    }
    inimigos.clear();

    return 0;
}