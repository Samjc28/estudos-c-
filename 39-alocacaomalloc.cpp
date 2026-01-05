/*A alocação dinâmica de memória é um conceito fundamental em C++ que permite que o seu programa solicite espaço na memória do computador enquanto ele está sendo executado (runtime), em vez de definir um tamanho fixo antes mesmo de o programa começar (compile time)*/

/*Como ela funciona?
Para entender a alocação dinâmica, precisamos diferenciar dois lugares onde o C++ guarda dados:
Stack (Pilha): Memória gerenciada automaticamente. É rápida, mas tem tamanho limitado e fixo. As variáveis somem assim que a função termina.
Heap (Monte): Um grande reservatório de memória livre. É aqui que a alocação dinâmica acontece. Você pede um pedaço de memória, usa e, tradicionalmente, precisa avisar quando terminou de usar.*/

/*Alocação no C++ Moderno (C++11 em diante)
O C++ moderno segue o princípio do RAII (Resource Acquisition Is Initialization). A ideia é: você não deve gerenciar a memória manualmente. O próprio objeto deve saber quando se destruir.
A. Containers (std::vector)
Na maioria das vezes, você não precisa de new. Se precisa de um array que cresce sozinho, use std::vector. Ele gerencia toda a alocação dinâmica internamente para você.
B. Smart Pointers (Ponteiros Inteligentes)
Se você realmente precisar alocar um objeto dinamicamente, usamos os Smart Pointers da biblioteca <memory>. Eles deletam a memória automaticamente quando não são mais necessários.*/

#include<iostream>
#include<memory> // para usar ounique_ptr e make_unique
#include<vector> // container dinamico

using namespace std;

class Inimigo{
    public:
    Inimigo(std::string nome) : nome_(nome){
        std::cout << "[surgir Inimigo] Inimigo " << nome_ << "Heap \n";
    }
    ~Inimigo(){
        std::cout << "[Morreu] Inimigo " << nome_ << " destruido da memeria\n";
    }
    void atacar(){
        std::cout << nome_ << " Atacou o jogador!\n";
    }

    private:
        std::string nome_;

};

int main(){

    // usamos o vector para criar varios inimigos
   // e o unique_ptr para evitar memory leak
    std::vector<std::unique_ptr<Inimigo>> horda;

    cout << "--- Criando hroda de inimigos --- \n";
    horda.push_back(std::make_unique<Inimigo>("Orc "));
    horda.push_back(std::make_unique<Inimigo>("Esqueleto "));

    for(const auto& inimigo : horda){
        inimigo->atacar();
    }

    cout << "--- O jogo acabou ---";



    return 0;
}