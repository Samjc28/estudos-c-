/*Neesa aulas vamos ver como fazer o uso de ponteiros com funções.*/

/*A combinação de ponteiros com funções é onde você realmente começa a usar o poder do C++. Esse conceito é crucial para entender como o C++ lida com memória e eficiência.
1. Como Funcionam Ponteiros com Funções
Existem duas maneiras principais de usar ponteiros ao chamar funções:
A. Passagem de Ponteiros como Argumentos (Passagem por Endereço)
Aqui, a função recebe o endereço de memória de uma variável, em vez de uma cópia de seu valor. Isso permite que a função modifique a variável original fora do seu escopo.

O que acontece:
Chamada: Você usa o operador & (Endereço) para obter o endereço da variável (&minha_variavel).
Recepção: A função declara o argumento como um ponteiro (tipo* nome_ponteiro).
Ação: Dentro da função, você usa o operador * (Desreferência) para acessar e mudar o valor no endereço original.
Exemplo Clássico: Função trocaValores
Se você tentar trocar o valor de duas variáveis passando-as normalmente, não funciona, porque a função só troca as cópias. Passando ponteiros, funciona:*/

/*
void trocar(int* ptrA, int* ptrB) {
    int temp = *ptrA; // Guarda o valor no endereco de A
    *ptrA = *ptrB;    // O valor no endereco de A recebe o valor de B
    *ptrB = temp;     // O valor no endereco de B recebe o valor guardado
    }

// Uso:
// int x = 10, y = 20;
// trocar(&x, &y); // Passa os ENDEREÇOS de x e y
*/

#include<iostream>

using namespace std;