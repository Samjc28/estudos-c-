/*Fantástico! Ponteiros são um dos conceitos mais poderosos e, ao mesmo tempo, um dos mais desafiadores do C++. Entender ponteiros é fundamental para dominar a linguagem. Vamos começar com a parte teórica, definindo o que são e como funcionam os operadores básicos.
📌 Ponteiros em C++: A Teoria
1. O que é um Ponteiro? Um ponteiro é uma variável que armazena o endereço de memória de outra variável.
Pense na memória do seu computador como uma grande lista de caixas de correio.
Variável Comum: A própria caixa de correio, que armazena um valor (ex: o número 10).
Ponteiro: Uma variável especial que armazena o endereço (o número da caixa de correio) onde aquele valor está guardado.
O tipo do ponteiro (int*, double*, etc.) indica qual tipo de dado ele espera encontrar naquele endereço de memória.*/

/*Endereço	Address-of Operator	{&} (E comercial)	Retorna o endereço de memória de uma variável.
Desreferência	Dereference Operator	{*} (Asterisco)	Acessa o valor armazenado no endereço apontado pelo ponteiro.
*/
/*
Por que Usar Ponteiros?
Os ponteiros são essenciais para:
Gerenciamento Dinâmico de Memória: Alocar memória (Heap) em tempo de execução para criar estruturas de dados flexíveis (como std::vector ou std::list).
Acesso Direto à Memória: Manipular dados em locais específicos e estruturas de baixo nível (hardware, sistemas operacionais).
Passagem por Referência Eficiente: Em vez de copiar grandes estruturas de dados para uma função, você passa apenas o endereço (o ponteiro), economizando tempo e memória.
*/

//  O FOCO VAI SERÁ ENTENDER COMO OS OPERADORES &(ENDEREÇO) e *(DESREFERENCIA) FUNCIONAM JUNTOS

#include<iostream>

using namespace std;

int main(){

    // 1 Declaração da variavél comum
    int valor = 100;
    
    // 2 Declaração do ponteiro
    //'int*' diz ao compilador que 'prt_valor' e um ponteiro para inteiro
    int* ptr_valor;

    // -- Operdaor & (endereço) ---
    // 3 Inicializando: O ponteiro recebe o endereço de 'valor'
    //'&valor' retorna oendereço de memoria onde 100 está guardando.
    ptr_valor = &valor;

    // saida de dados 
    cout << "estado inicial" << endl;
    cout << "Valor da variavel (valor): " << valor << endl; 
    cout << "Endereco de 'valor' (&valor): " << ptr_valor << endl; 
    cout << "Conteudo do ponteiro (ptr_valor): " << ptr_valor << endl;

    // Operado * (desreferencia)

    // 4 Desreferencia para ler o valor

    cout << "\nValor acessado pelo ponteiro (*ptr_valor):" << *ptr_valor << endl;
    // 5. Desreferencia para MODIFICAR o valor
    // Atribui 200 ao local de memoria apontado por ptr_valor.
    *ptr_valor = 200; 

    // --- Saida de Dados (Apos Modificacao) ---
    cout << "\n--- APOS MODIFICACAO ---" << endl;
    cout << "Novo valor de 'valor': " << valor << endl; // 'valor' tambem mudou!
    cout << "Valor acessado pelo ponteiro (*ptr_valor): " << *ptr_valor << endl;

    return 0;

}
 
