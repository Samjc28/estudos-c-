/*A função system() faz parte da biblioteca <cstdlib> (ou <stdlib.h>) e serve para enviar um comando direto para o Terminal (no Linux/Mac) ou para o Prompt de Comando (CMD) (no Windows).
Basicamente, o seu programa C++ "pede" para o sistema operacional executar algo para ele.*/
 /*A sintaxe é muito simples: você passa uma string com o comando que você digitaria manualmente no terminal.*/

#include<iostream>
#include<stdlib.h> // poderia ser também a <cstdlib> essas são as biblioteca necessarias para usar essa função.

using namespace std;

int main (){

    system("color 46");
    system("dir");

    cout << "USANDO O CLS PARA LIMPA A TELA: " << endl;
    system("cls"); // desse modo vai se executado essa string a cima e logo depois o system vai apgar-lá.

    system("color 08");
    cout << "A tela foi limpa." << endl;
    // podemos usar varios comandos do ms-dos
    // porém não recomendado, pois isso é muito pesado, existe outras maneiras para usar os comandos do sistema.


    return 0;
}