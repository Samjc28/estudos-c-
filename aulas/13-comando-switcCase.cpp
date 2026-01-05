/*O comando Switch case vamos fazer apernas teste de igualdade
o switch (expressão{
    comandos a serem executados;
    case bloco de execusão 2
se nenmha dos case forem executados ele vai executar o comando default 
}) 
*/
/* Para fixação do conhecimento vamos fazer um menu de opção usando o switch case*/

/* É possivél colocar um switch dentro de um case, sendo assim o switch alinhado como o if dentro do if.*/
#include <iostream>

using namespace std;

int main(){

    // declarando variaveis locais

    int numOpcao;

    cout << "Menu de Opçoes" << endl;
    cout << " [1]Menu de Carnes\n [2]Menu das Sobremessas\n " << endl;

    cout << "Digite o valor da Opção: " << endl;
        cin >>numOpcao;


    // iniciando o switch
    switch (numOpcao)// aqui é a expressão que vai ser comparada
        {
        case 1: // caso 1 ser o usuario querer as carnes
            cout << " Pratos das carnes " << endl;
            break;
        case 2: // caso 2 se o usuario quiser as sobremessas
            cout << " Lista de Sobremessas" << endl;
            break;
        
        default: // aqui se o usuario digite um valor diferente das opção
            cout << " Essa Opção é invalida! " << endl;
            break;
        }

    cout << " Qual a Sua avaliação para nosso atendimento ?" << endl;

    int notaAtendimento;
         cin >> notaAtendimento;

    if (notaAtendimento >= 5)
    {
        cout << "Clinte Satifeito! " << endl;
    } else 
        cout << "Clinte não satifeito! " << endl;

    


    return 0;
}