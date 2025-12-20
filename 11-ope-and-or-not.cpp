/*Estrutura condicional if com os operadores AND, OR e NOT. com eles temos outras possibilidades para trabalhar com o if.

Para utilizar o operador AND usamos o &&. and sig e. eles são operadores logicos, logo eles vão retorna verdadeiro ou falso. para que o and retorne verdadeiro todos os teste devem ser verdadeiro.

Agora para o operdor OR representado pelo || apernas uma das condições devem ser verdadeira. ex: se 5 > 6 ou 5 < 6 é verdade

É possivél fazer a combinação desses operadores para fazer um teste logicos com varias condições.

EX: if( (num >= 1 && n <5) || (num = 5 && n >=6 ) || (num != n) ) esse é um exemplo de como posso usa-los para teste mais de uma condição dentro de um if.


*/

#include <iostream>

using namespace std;

int main() {
    int nume = 5;
    int n = 6;

    // exemplo usando o operador AND &&
    //if( (num >= 1 && n <5) || (num == 4 && n >=6 ) || (num != n) ) isso aqui tbm é valido retorna vedadeiro.

    if (nume == n && nume > n)
    {
        cout << "verdadeiro " << endl;
    } else 
        cout << "Falso" << endl;
    
//*************************************************** */

    // exemplo de utilização do operador OR || 
    if (nume > n || nume < n)
    {
        cout << "verdadeiro";
    }
    
//*************************************************************** */

    // Agora vamos ver o operador de negação o  NOT que é esse sinal ==> !
    // Ele irá inverte o teste oque é sim vira não e virse-versa.

    int num = 1;
    // se num não for verdadeiro nesse caso nega que num é 1 resultando em falso
    if (!num) // se eu retirar o ! o valor e verdadeiro pq o valor de num é 1. aqui ele nega isso
    {
        cout << " o valor é verdadeiro" << endl;
    } else  
        cout << " o valor é falso" << endl;
    



    return 0;
}