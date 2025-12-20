
/*Em C++, quando falamos em "Lista", estamos nos referindo principalmente ao std::list da STL, que implementa a estrutura de dados Lista Duplamente Encadeada (Doubly Linked List).
1. A Estrutura de Lista Encadeada (Conceito)
Diferentemente de um array (vetor), onde os elementos estão lado a lado na memória, em uma Lista Encadeada:
Nós (Nodes): Cada elemento da lista é um objeto separado (um "nó").
Encadeamento: Cada nó armazena o dado e um ponteiro para o próximo nó.
Duplamente Encadeada (std::list): Cada nó tem dois ponteiros: um para o nó próximo e um para o nó anterior.
Vantagem Chave: Essa estrutura encadeada permite que os elementos da lista fiquem espalhados pela memória. Isso elimina a necessidade de mover grandes blocos de dados quando você insere ou remove um elemento no meio da lista.*/
/*A Lista ( std::list ) é ideal para cenários onde a inserção e remoção de elementos no meio da coleção são operações muito frequentes, e o acesso direto por índice é raro.*/
/*Para usar a Lista Duplamente Encadeada, você deve incluir a biblioteca <list>. Ela usa os métodos push_front/push_back (como a Fila) e métodos de inserção/remoção no meio usando Iteradores.*/

/*Método,Descrição,Complexidade
push_front(val),Adiciona um elemento no início da lista.,O(1)
push_back(val),Adiciona um elemento no fim da lista.,O(1)
pop_front(),Remove o elemento do início da lista.,O(1)
pop_back()**,Remove o elemento do fim da lista.,O(1)
"insert(it, val)",Insere um elemento antes da posição apontada pelo iterador it.,O(1)
erase(it),Remove o elemento apontado pelo iterador it.,O(1)*/



#include <iostream>
#include <list>

using namespace std;

int main() {

    // Iniciando a lista, mesmo jeito da fial e da pilha
    // declaro a lista, informo o tipo do conteudo, e o nome
    list<string> lista_usuarios;

    // Inserção nas extremidades
    lista_usuarios.push_back("Joelson"); //2°
    lista_usuarios.push_front("Samuel"); //1°, 2°
    
    //2 inserção no meio (usando iteradores)
    // O interator aponta para o primeiro elemento 
    //auto: Uma palavra-chave para simplificar a declaração de variáveis.
    //Referência (&): Um atalho que faz com que uma variável represente outra, evitando cópias.

    //iniciando a lista 
    //Iteradores (it): Substituem os índices ([0], [1]) em estruturas como a lista.
    auto it = lista_usuarios.begin();

    // Avanca o iterator para o proximo elemento
    it++;

    // Insere 'Correa' ANTES do 2°
    lista_usuarios.insert(it, "Correa"); // [samuel, correa joelson]

    // adicionando um elemento numa posição
    advance(it, 3);
    lista_usuarios.insert(it, "Rosa");

    lista_usuarios.sort();

    // se eu quiser limpa tpda a lista uso o metedo clear
    //lista_usuarios.clear();

    // mostrando o tamnho da lista
    cout << "Tamanho da lista: " << lista_usuarios.size() << endl;

    // mostrando a lista na tela
    cout << "Lista apos as insercao: " << endl;
    for (const auto& nome: lista_usuarios)
    {
        cout << nome << " ";
    }
    
    // 3. Remocao no meio (Remove 'Correa')
    lista_usuarios.remove("Correa"); // [samuel, joelson]

    cout << "\nLista apos remocao de Correa: " << endl;
    for (const auto& nome : lista_usuarios) {
        cout << nome << " ";

        cout << endl;
    }

    cout << "Tamanho da lista: " << lista_usuarios.size() << endl;
    return 0;
}

// exister também o merge() que se eu tive duas lista e querer mesclar elas (JUNTAR) as duas posso usar ele para isso
// nome_lista1.merge(nome_lista2);
// No caso a lista nome_lista2 fica vazia, pois os seus elementos vão para a lista. nome_lista1