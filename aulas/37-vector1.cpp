/*Removendo um item específico (erase) Diferente do pop_back(), que apenas remove o último, o método .erase() pode remover um elemento em qualquer posição.
O detalhe importante: O erase não aceita apenas o número do índice (como 0 ou 1). Ele precisa de um Iterador. Pense no iterador como um "ponteiro" que indica para o C++ onde ele deve começar a contar.*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    // removendo itens
    vector<string> frutas = {"Maca", "Banana", "Abacaxi", "Abacate", "Uva"};
    //Quero remover a  Banana no indice 1
    // frutas.begin() aponta para o inicio (indice 0)
    // + 1 pula apra o indice 1
    frutas.erase(frutas.begin() + 1);

    for (auto f : frutas)
        cout << f << " "; // saida: Maca, abacaxi, abacate e uva
    
        cout << "\n";
    // Ordenando o vector (sort)
    //Para colocar os elementos em ordem crescente, usamos a função sort. Ela é extremamente rápida e eficiente. Para usá-la, //você precisa incluir a biblioteca <algorithm>.

    vector<int> n = {100, 220, 130, 4, 50};

    //Ordenado do inicio ao fim

    sort(n.begin(), n.end());

    cout << "Numeros ordenados: ";
    for (int i : n) 
    {
        cout << i << " ";
    }
    


    return 0;
}