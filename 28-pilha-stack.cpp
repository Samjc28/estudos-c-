#include <iostream>
#include <stack> // para pode trbalhar com pilha

using namespace std;

int main() {


    stack<int> historico; // Cria uma pilha de inteiros
    char letra = 's';
    
    
    
    // não preciso informa o tamanho, pois ele e dinamico comforme vou adicionando elementos ele vai crescendo.
    // o metedo push ele adiciona elemento na pilha.
   // historico.push(10); // Adiciona 10, 1° elemento adicionado logo será o ultimo a sair
    //historico.push(20); // Adiciona 20 (agora no topo)
    //historico.push(30); // Adiciona 30 (novo topo), ultimo a ser adicionado portanto será o primeiro a sair.
    

    // coloando valores automatico na pilha
    do
    {
        int novo_valor;
        cout << " Adicionado novos elementos a Pilha\n";
        cin >> novo_valor;
        historico.push(novo_valor);
        
        cout << "Deseja continuar adicionando novos elementos ?[s / n] " << endl;
        cin >> letra;
     
    } while (letra == 's' || letra == 'S');



    // como o empty, ele vai retorna se a pilha está vazia
    // se eu colocar o empty antes da pilha ele vai retorna pilha vazia.
    if (historico.empty())
    {
        cout << "Pilha vazio" << endl;
    } else
        cout << "Pilha contem arquivos";


    // para imprimir o tamanho da pilha usamos o size
    cout << "Tamanho da pilha: " << historico.size() << endl;

    // O topo e o ultimo elemento adicionado (30)
    cout << "Elemento do topo: " << historico.top() << endl; // Saída: 30

    historico.pop(); // o metedo .pop ele Remove o elemento do topo da pilha nesse caso o 30

    // O novo topo e 20
    cout << "Novo elemento do topo: " << historico.top() << endl; // aqui estamos usando o .pop para visualizar o elemento do topo

     
    return 0;
}