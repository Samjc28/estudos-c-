/*Em C++, a matriz é, na verdade, um array multidimensional. A principal diferença para um vetor (que é um array unidimensional) é a sua estrutura.
Vetor (Array Unidimensional): É uma lista linear de elementos. Pense em uma única linha ou coluna. Para acessar um elemento, você precisa de apenas um índice.
Exemplo: Uma lista de notas de alunos.
Sintaxe: int vetor[5];
Acesso: vetor[2]

Matriz (Array Multidimensional): É uma coleção de elementos organizada em mais de uma dimensão, como uma grade, tabela ou planilha. Para acessar um elemento, você precisa de pelo menos dois índices: um para a linha e um para a coluna.
Exemplo: Um tabuleiro de jogo (xadrez, jogo da velha) ou uma tabela com linhas e colunas.
Sintaxe: int matriz[3][4]; (3 linhas e 4 colunas)
Acesso: matriz[1][2]

Como Funcionam as Matrizes
Uma matriz é como um array de arrays. A sintaxe int matriz[3][4]; na verdade declara um array de 3 elementos, onde cada elemento é um outro array de 4 inteiros.
Acesso por Índices: O primeiro colchete ([i]) refere-se à linha, e o segundo ([j]) à coluna.
matriz[0][0] é o elemento na primeira linha, primeira coluna.
matriz[2][3] é o elemento na terceira linha, quarta coluna.
Exemplo Prático: Matriz vs. Vetor

Qual a utilidade?
Matrizes são perfeitas para representar dados que naturalmente se organizam em forma de tabela, como:
Mapas de jogos (posição X e Y).
Resultados de testes (linha para aluno, coluna para matéria).
Dados de planilhas.
Vetores são usados para dados que se organizam em uma única sequência, como uma lista de nomes, uma sequência de números ou uma fila de objetos.
Em resumo, a matriz é uma extensão do vetor, criada para lidar com dados de forma mais complexa, usando múltiplas dimensões para representar relações mais ricas entre os elementos.
*/
//                                           0 1 2 colunas
/*No nosso exemplo nossa matriz é a assim: 0 |_|_|_|*/
                            // linhas      1 |_|_|_|
                                    //     2 |_|_|_| 
                                    //     3 |_|_|_| 
                                    //     4 |_|_|_| 
#include <iostream>

using namespace std;

int main() {
 //Iniciando o Array bidimensional. o primeiro valor são as linhas e o segundo são as colunas. para sabemos a quintade de espaço na array multiplica o 1° numero pelo 2° 3*3=9 lugares de memoria para guarda valores. Lembrando que sempre começa com o valor 0.
    int matriz[3][3];

    // variaveis para receber os indices das linhas e colunas
    int l,c;

 //adicioando valores de forma automatica
// como não falamos os valores o computador vai preencher só as linha começando do 0 até o 2 cada colunas vai recber o mesmo valor da linhas que esta.
/*
    for (l = 0; l < 3; l++) // Aqui ele vai percorer as linhas para exibir seus valores
    {
        // dentro do for vou fazer outro for para percorer as colunas
        for (c = 0; c < 3; c++) // aqui ele vai percorer as colunas
        {
            matriz[l][c] = l; 
        }
        
    }
 */
// para adicionar valores via teclado vamos o for também 
      for (l = 0; l < 3; l++) // Aqui ele vai percorer as linhas para exibir seus valores
    {
// dentro do for vou fazer outro for para percorer as colunas
        for (c = 0; c < 3; c++) // aqui ele vai percorer as colunas
        {
            cout << "Digite os valores: ";
            cin >> matriz[l][c]; // em vez do cout usamos o cin de entrada
        }
        
    }


// adcionando valores de forma manual a matriz
/*
    //Linha 1 coluna 1
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    
    //linha 2 coluna 2
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    
    //Linha 3 coluana 3
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
*/
// Para exibir os valores da matriz bidimensional vamos usar um loop for alinhado um for dentro de outro for.
    for (l = 0; l < 3; l++) // Aqui ele vai percorer as linhas para exibir seus valores
    {
// dentro do for vou fazer outro for para percorer as colunas
        for (c = 0; c < 3; c++) // aqui ele vai percorer as colunas
        {
            cout << matriz[l][c] << " "; 
        }
        // cout apernas para pular uma linha
        cout << "\n";
    }



    return 0;
}