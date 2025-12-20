/* Comandos If, else */
/* Com os comandos if e else podemos executar condiçoes para realizar terminada tarefa caso uma condição seja satisfeita. ex: se tive sol vou a praia, senão fico em casa*/

#include <iostream>

using namespace std;

int main () {
  
    // Criar duas variaveis 
    string nome;
    int var = 50;
    char letra = 'j'; // essa variavél só receber um carctere nesse caso aqui é o (j)

    // iniciando a estrutura condicional if
    // para o if devemos criar uma condição e essa condição for verdadeira o codigo dentro do if é executado.

    // aqui o usuario vai digita um valor para a string.
    cout << "Digite um valor para a string: " << endl;
    cin >> nome;
    
    if (var == letra) // dentro dos ( ) usamos os op. logicos para valida a condição sendo eles: >, <, >=, <=, !=, ==. desse modo eu faço a comparação dos valores das variaveis que serão tratadas
    {
        /* Só executado se a condição for verdadeira */  
        cout << " O valor das duas variavél é o mesmo! " << endl;
        // Agora se essa condição for falsa eu vou usar o (else) para que uma segunda condição seja executada nesse caso
    }  else // Aqui é onde essa será feita essa verificação no caso de condição for falsa.
        cout << " O valor das variaveís são diferentes: " << endl;

        /* Aqui nesse teste a segunda opção será executada pois os valores das variaveís são diferentes. Podemos usar com numeros, strings blocos de codigos em uma define*/
    
    // if coparando uma string

    if (nome == nome)
    {
        cout << "O valor é igual valor da string: " << nome << endl;
    } else 
        cout << "O valor não são iguais.";
    

    return 0;  
}