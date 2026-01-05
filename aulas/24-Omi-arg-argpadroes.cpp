/*
A omissão de argumentos e os argumentos padrão estão diretamente conectados. Um permite o outro.
Os argumentos padrão são a funcionalidade que você configura no código.
A omissão de argumentos é o resultado dessa configuração, ou seja, a capacidade de chamar uma função sem precisar fornecer todos os valores.
Vamos entender cada um separadamente.
Argumentos Padrão (Default Arguments)
Argumentos padrão são valores predefinidos que você atribui a um parâmetro de função em sua declaração. Eles servem como valores "de reserva" caso o usuário não forneça um valor para esse argumento quando a função for chamada.
Eles tornam as funções mais flexíveis, permitindo que elas sejam usadas de maneiras diferentes, sem a necessidade de criar múltiplas versões sobrecarregadas para cobrir todos os cenários.
Sintaxe:
Você atribui um valor padrão usando o operador de atribuição (=) na declaração da função.

Omissão de Argumentos
A omissão de argumentos é simplesmente o ato de não fornecer um valor para um parâmetro que tem um valor padrão ao chamar uma função. Quando você omite um argumento, o compilador C++ usa automaticamente o valor padrão que você definiu.
Isso é o que permite a flexibilidade das funções. Você pode chamá-la de forma "completa" ou de forma "simplificada".
Exemplo Prático: Unindo os Conceitos
Vamos usar uma função para calcular o valor de um produto com um desconto. O desconto será um argumento padrão.
*/

#include <iostream>

using namespace std;

// escopo da função
// o que está dentro dos () é o tipo é o nome da variavél q vai receber o conteudo 
void texto (string texto = " "); // esse final é para omissão do argumentos, se não tiver argumento será impresso esse, o default
// mesmo que tenha um valor no default será impresso o do argumento dqa função

int main () {

    // 
    texto("24 - Omissão de argumentos e argumentos padrão" );

    return 0;
}

// função para imprimir um terxto
// vai ser exibido o conteudo da variavél por isso estou colocando o nome texto
void texto (string texto) {
    cout << "\n" << texto << "\n";

}