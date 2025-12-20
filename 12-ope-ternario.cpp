/*If ternario é um meio mais simples de usar o if
será usado para quando tivemos condições simple, 

uso (expressão) ? valor1 : valor2 ;
*/

#include <iostream>
#include <locale>// incluindo a lib para usar acentos em pt-br

using namespace std;

int main (){

    setlocale(LC_ALL, "Portuguese"); // fazendo a config. para usar as acentuações
    // declarando variaveis

    int nota1, nota2, calc;
    string resl; // variavel de string 

    cout << "Digite a 1° nota: " << endl;
    cin >> nota1;
    cout << "Digite a 2° nota: " << endl;
    cin >> nota2;

    calc = (nota1 + nota2) / 2.0;

    // usando o operador ternario
    (calc >=60) ? resl = "Aprovado!" : resl = "Reprovado!"; 
    /*funcionar da seguinte forma, entre os () colocamos nossa expressão logica o ? representa o (if /se ) da nossa expressão, a string resl receber o texto "Aprovado" caso a condição seja verdadeira o : representa o caso contrario da condição verdadeira*/

    cout << "Resultado do aluno: " << resl << "A nota é: " << calc << endl;

    return 0;
}  