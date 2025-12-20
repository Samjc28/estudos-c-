/*Continuação da aula de if e else.*/

/* Para efeito de aprendizagem vamos fazer um programa para verificar notas de um aluno 
e saber se ele foi aprovadoou reprovado para isso vamos usar o il e o else*/

#include <iostream>
#include <cstdlib> //ou stdlib.h  isso para usamos o SYSTEM ("CLS")

using namespace std;

// declarando as variaveis no escopo global
int nota1;
int nota2;
int result;

char letra; // para char uma letra usar ' '
string nome;

int main() {

    
    cout << "Bem-Vindo ao sistema de notas!" << endl;

    // recebendo o nome do aluno
    cout << "Digite o seu nome: " << endl;
    cin >> nome;

    // Recebendo os valores das notas
    cout << "Informe os valores das notas: " << endl;
    cin >> nota1;
    cin >> nota2;
    cout << "Os valores das notas são: " << " \nNota_1: " << nota1 << " \nNota_2: " <<nota2 << endl;
    
    // fazendo o calculo das notas

    result = (nota1 + nota2) / 2.0;

    // estrutura condicional para verificar a media das notas

    if (result >= 7.0)
    {
        cout << "Aluno aprovado!! A media é: " << result << endl;
    } else
        cout << "Aluno não possuir nota suficiente para aprovação! Nota atual é:" << result << endl;
    
        /*Estrutura basica podemos incluir if else, else if para criar uma condição onde poderiamos colocar o aluno em recuperação ou reprova direto.*/


    // posso colocar um comando para limpa a tela toda vez  que o programa encerra

    cout << "Deseja limpa tela [S/n] ? " << endl;
    cin >> letra;

    if (letra == 'S' or 's')
    {
        system ("cls"); // comando do DOS- windonws linux é clear 
        // para usar ess função usar a biblioteca <cstdlib>
    }
    


    return 0;
}