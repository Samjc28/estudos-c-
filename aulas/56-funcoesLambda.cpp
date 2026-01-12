/*Funções Lambda
Uma função lambda é uma função pequena e anônima que você pode escrever diretamente no seu código. Ela é útil quando você precisa de uma função rápida sem precisar nomeá-la ou declará-la separadamente.
Pense nisso como uma "mini função instantânea".*/

// [capture] (parameters) { code }; modo de uso das funções lambda

/*Exemplo básico de lambda
Aqui, messagetemos uma função lambda que imprime uma mensagem na tela:*/
/*
int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();
  return 0;
}
*/

/*Como elas são usadas?
O uso mais comum é com algoritmos da biblioteca padrão (<algorithm>), como o std::sort ou std::for_each.*/


  // criando uma função lambda
    // 1- captura de variaveis, 2-argurmento e 3-corpo da função
   // [](){};
   
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {5, 2, 9, 1, 3};

    // Usando uma lambda para definir a regra de ordenação (decrescente)
    std::sort(numeros.begin(), numeros.end(), [](int a, int b) {
        return a > b; 
    });

    for (int n : numeros) std::cout << n << " "; // Saída: 9 5 3 2 1
    return 0;
}