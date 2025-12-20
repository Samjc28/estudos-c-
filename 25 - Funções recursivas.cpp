/*Uma função recursiva é uma função que chama a si mesma para resolver um problema. Em vez de usar um loop (for, while) para repetir uma tarefa, ela resolve o problema dividindo-o em versões menores e mais simples de si mesmo, até chegar a um caso base que pode ser resolvido diretamente.
A recursão é como olhar para dois espelhos de frente. A imagem se repete infinitamente. Uma função recursiva funciona de forma parecida: ela resolve um problema chamando uma versão menor e idêntica de si mesma, que por sua vez chama uma versão ainda menor, e assim por diante.
Para que a recursão funcione corretamente e não se torne um loop infinito, ela precisa de duas partes essenciais:
Caso Recursivo: A parte da função onde ela chama a si mesma para resolver uma versão menor do problema.
Caso Base: A condição de parada. É o ponto onde a função não se chama mais, resolvendo o problema mais simples diretamente e permitindo que a cadeia de chamadas comece a retornar. Sem um caso base, o programa continuará a chamar a si mesmo indefinidamente, resultando em um erro de stack overflow.*/

#include <iostream>

using namespace std;

// prototipo da função
long long fatorial(int n);

int main (){

    int numero;
    cout << " Dgite o valor: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " e " << fatorial(numero) << endl;


    return 0;
}

// Função recursiva para calcular o fatorial
long long fatorial(int n){
    //1. Caso base: Se n for 0 ou 1, a recursividade para aqui.
    if(n <=1){
        return 1;
    }

    // 2. Caso recursivo: A função chama a si mesma com um problema menor (n-1).
    else{
        return n * fatorial(n - 1);
    }
    
}