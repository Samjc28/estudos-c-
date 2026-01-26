/*O algoritmo std::find faz parte da biblioteca <algorithm> do C++ e é uma das ferramentas mais utilizadas para buscar elementos em coleções (como vector, list ou arrays comuns).

Ele funciona de forma genérica, o que significa que você pode usá-lo para buscar um número, uma string ou até mesmo um objeto de uma struct ou class.

Como o std::find funciona?
O std::find percorre um intervalo de elementos (do início ao fim) e compara cada um deles com um valor que você forneceu.

Se encontrar: Ele retorna um iterador (que funciona como um ponteiro) apontando para a primeira ocorrência do elemento.

Se não encontrar: Ele retorna o iterador que aponta para o fim do container (o end()).*/

#include <iostream>
#include <vector>
#include <algorithm> // Necessário para usar o std::find
#include <string>

using namespace std;

int main() {
    vector<string> frutas = {"maca", "banana", "laranja", "uva"};
    string busca = "laranja";

    // O std::find recebe: (inicio, fim, valor_procurado)
    auto it = find(frutas.begin(), frutas.end(), busca);

    // Verificamos se o resultado é diferente de 'end()'
    if (it != frutas.end()) {
        cout << "Sucesso! " << busca << " encontrada no sistema." << endl;
        
        // Podemos descobrir a posição (índice) subtraindo o iterador do início
        int posicao = distance(frutas.begin(), it);
        cout << "Indice: " << posicao << endl;
    } else {
        cout << "Erro: " << busca << " nao esta na lista." << endl;
    }

    return 0;
}