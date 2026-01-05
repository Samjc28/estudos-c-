/*A Fila (Queue) é uma estrutura de dados fundamental em ciência da computação que armazena elementos em uma ordem estrita, seguindo o princípio FIFO (First-In, First-Out), ou seja, o primeiro elemento que entra é o primeiro a sair.
Pense em uma fila de pessoas em um banco, supermercado ou um drive-thru. A primeira pessoa que chega é a primeira a ser atendida.
Características Chave:
FIFO: É o oposto da Pilha (Stack), que usa LIFO (Last-In, First-Out)
Acesso Restrito: Elementos só podem ser adicionados em uma extremidade (a traseira ou back) e removidos da outra extremidade (a frente ou front).*/

/*Como Utilizar std::queue em C++
Em C++, a fila é implementada pela classe adaptadora
de contêiner std::queue, encontrada na biblioteca <queue>.*/

/*
Enfileirar:	push(item)	Adiciona um elemento ao final (traseira) da fila.
Desenfileirar:	pop()	Remove o elemento que está na frente (início) da fila.
Frente:	front()	Retorna (lê) o elemento que está na frente, sem removê-lo.
Traseira:	back()	Retorna (lê) o elemento que está no final/traseira da fila.
Vazia:	empty()	Retorna true se a fila não tiver elementos
Tamanho: size() serve para retornar o número atual de elementos que estão contidos na fila.
*/

/*Necessidade no Desenvolvimento de Software/Sistemas
A fila é indispensável sempre que você precisa garantir:

1_Ordem de Chegada: Em sistemas que não podem se dar ao luxo de ignorar a ordem em que os eventos ocorreram (e-commerce, transações bancárias, logs de eventos).

2_Sincronização: Em sistemas multitarefa (threads), onde múltiplas partes do programa produzem tarefas e um único processador as consome. A fila atua como um buffer seguro, garantindo que o consumidor não perca tarefas e que o produtor não sobrecarregue o sistema.

3_Justiça (Fairness): Ao processar requisições ou usuários, a fila assegura que ninguém seja "passado para trás", aplicando a regra democrática de quem chegou primeiro será atendido primeiro.*/


// criando um sistema de atendimento de clientes usando Fila/queue
#include<iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> clientes; // nome da minha fila é clientes

    // fazendo o enfileiramento usando o (push). vou está fazendo de forma manual
    clientes.push("Joelson"); // primeiro elemento a entrada na fila/queue
    clientes.push("Samuel"); 
    clientes.push("Correa"); 
    clientes.push("Da"); 
    clientes.push("Rosa"); //ultimo elemento a entrada na fila/queue

    // mostrando o tamanho da fila

    cout << "Total para atendimento: " << clientes.size() << endl;

    // exibindo os elementos da fila
    cout << "Primeiro cliente da fila: " << clientes.front() << endl; // exibindo o primeiro elemento da fila, mais não o remove 
    cout << "Ultimo cliente da fial: " << clientes.back() << endl; // Aqui será exibido o ultimo da fila
    
    // Agora vamos (desenfileirar) realizar o atendimento do cliente e remove-lo da fila
    clientes.pop(); // usando o pop o primeiro da fila é removido, dando lugar para o segundo

    // exindo o proximo da fila
    cout << "Proximo da vez: " << clientes.front() << endl;


    // processando o resto da fila, exinbindo os demais clientes(elementos da fila)
    cout << "Restante da fila para atendimento: " << endl;
    while (!clientes.empty()) // enquanto a fila for diferente de vazio 
    {
        cout << "Em atendimento: " << clientes.front() << endl;
        clientes.pop();
    }
 
    cout << "Fim do Programa!";

    return 0;
}