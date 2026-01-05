/*
Funções em C++: O que são, Quando Usar e Como Funcionam
Uma função é um bloco de código que realiza uma tarefa específica. Pense nela como uma "minitabela" dentro do seu programa. Quando você precisa executar aquela tarefa, você simplesmente "chama" a função em vez de reescrever o código todo.
Como uma Função Funciona
Uma função é definida por três elementos principais:
Nome: Um identificador para o bloco de código.
Parâmetros (opcional): Valores de entrada que a função pode receber para trabalhar.
Tipo de Retorno (opcional): O tipo de dado do valor que a função devolve depois de completar sua tarefa.

Quando Utilizar Funções
Utilizar funções é uma das práticas mais importantes na programação e se resume a dois princípios:
Reutilização de Código (Princípio DRY - Don't Repeat Yourself): Se você precisa executar a mesma tarefa em vários lugares do seu programa, em vez de copiar e colar o código, você cria uma função. Isso evita duplicação, torna o código menor e mais fácil de manter.
Exemplo: A função cout << já foi criada por alguém. Você só a chama, sem precisar saber como ela foi implementada.
Organização e Clareza: Funções dividem um programa complexo em partes menores e mais gerenciáveis. Em vez de ter um único bloco de código enorme, você tem várias funções, cada uma com uma responsabilidade clara e única. Isso torna seu código mais fácil de ler, entender e depurar.
Exemplo: Um programa de calculadora pode ter funções separadas como somar(), subtrair(), multiplicar().
*/


// USAREMOS A ESCRITA DE CODIGO PROFISIONAL ONDE DECLARAREMSO NOSSA FUNÇÃO APOS A FUNÇÃO MAIN, ESSE É O JEITO QUE GRANDES PROJETOS SÃO ESCRITOS.
// PORÉM ANTES DA MAIN COLOCAREMOS UM PROTOTIPO DA FUNÇÃO PARA QUE O COMPILADOR SAIBA QUE MAIS PARA FRENTE VIRA A DEFINIÇÃO DESSA FUNÇÃO.
/*Um protótipo é uma declaração que diz ao compilador o seguinte:
"Olha, existe uma função chamada somar. Ela recebe dois int e retorna um int. A definição completa dela virá mais tarde no código."
Com o protótipo, o compilador fica satisfeito e o código de main() pode ser colocado no topo do arquivo, tornando a lógica principal do programa muito mais fácil de encontrar e ler.
*/


/* codigo para somar dois valores que o usuario digitou*/
#include <iostream>
using namespace std;

// Para inicio vamos fazer uma função que vai somar dois numeros inteiros.
// prototipo da função. (int é o tipo ) (somar é o nome da função) (int a, int b) são os argumentos da função
int somar(int a, int b);

// função para imprimir um texto
//void texto();

int main(){
    //int i; // var do loop for

    // chamando a função para exibir o texto
   // texto(); // argumentos pois não definir nenhum
    
    // caso queira imprimir mais de uma vez essa msg faço um loop 
   //  for ( i = 0; i < 10; i++)
  //  {
 //       texto();
// }
    // declarando as variavél a e b para receber os valores para somar
    int a; 
    int b; 
    int resultado;
    // chamando a função // aqui os valores a serem somado já estão no codigo, porém podemos receber esse valores via terminal, com o usario insirido os valores. // recebendo os valores via terminal pelo usuario
    cout << "Digite os valores para realizar a somar: " << endl;
    cin >> a;
    cin >> b;

    // Chamando a funcao, passando os valores lidos
    resultado = somar(a, b);
    cout << "resultado da somar: " << resultado << endl;
    return 0;
}

// definição completa da função
int somar (int a, int b) { //  aqui a foi criada a função e os argumentos dela, o return devolver a operação da função, retorna a variavél a somada com a variavél b
    return a + b;
}

/* definidor a função para imprimir um texto
void texto(){
    cout << "Programa para somar dois numeros.\n";
}
*/
