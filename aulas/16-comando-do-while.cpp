/* do-while vs. while: A Diferença Principal
O comando do-while e o while são ambos loops (laços de repetição) em C++. A principal diferença entre eles é quando a condição de repetição é verificada.
while: A condição é verificada antes de o bloco de código ser executado.
do-while: A condição é verificada depois de o bloco de código ser executado.
Isso significa que um loop do-while sempre executará seu bloco de código pelo menos uma vez, mesmo que a condição seja falsa desde o início. Já o loop while pode não ser executado nenhuma vez se a condição inicial for falsa.
O do-while é útil quando você precisa que uma ação ocorra pelo menos uma vez, como, por exemplo, exibir um menu para o usuário e esperar por uma entrada válida.*/

#include <iostream>

using namespace std;

string nome;
char letra;
int nota1, nota2;
float result;

int main (){

    // Para fazer o uso do comando Do While vou usar o codigo da aula 10
    // Aqui inicia o comando com O DO que sign = faça e todo esse bloco de comando será executado enquanto o usuario escrever a letra 'S' ou 's' essa condição só será feita no final da execução desse bloco.
    do
    {    
        cout << "--- Bem-Vindo ao sistema de notas! ---" << endl;

        // recebendo o nome do aluno
        cout << "Digite o nome do aluno: " << endl;
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
            cout << "Aluno não possuir nota suficiente para aprovação! Nota atual é: " << result << endl;
        
            /*Estrutura basica podemos incluir if else, else if para criar uma condição onde poderiamos colocar o aluno em recuperação ou reprova direto.*/


        // posso colocar um comando para limpa a tela toda vez  que o programa encerra

        cout << "--Deseja incluir a nota de outro aluno [S/n]?--" << endl;
        cin >> letra;
         break;

     
    } while (letra == 'S' || 's');

    return 0;
}