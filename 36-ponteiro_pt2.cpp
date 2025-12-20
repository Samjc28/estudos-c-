/*Nessa aula vamos utlizar ponteiros para manipular array*/
/*
Em essência, um array é apenas um bloco contíguo de memória. Os ponteiros usam essa contiguidade para se mover de um elemento para o outro.
O Fato Chave: O Nome do Array é um Ponteiro
Quando você declara um array:

C++
int numeros[3] = {10, 20, 30};
numeros (sem colchetes) é equivalente a &numeros[0]. Ambos representam o endereço de memória do primeiro elemento (10).
Você pode inicializar um ponteiro com o nome do array:
int* ptr = numeros; // 'ptr' agora aponta para o '10'
*/

// PARA COMPREENDER O CONTEUDO VOU FAZER UM SISTEMA DE GERENCIAMENTO DE JOGADORES
/*
O programa fará:
Usar uma struct para definir a estrutura de um jogador.
Criar um array de jogadores.
Usar funções com tipos de retorno e argumentos.
Usar ponteiros para processar o array de jogadores, demonstrando a aritmética de ponteiros.
*/


#include<iostream>
#include<string>

using namespace std;

// --- 1. Definicao da STRUCT (Registro de Dados) ---
struct jogador
{
    int numeroCamisa;
    string nome;
    int golsTemporada;
};

// --- 2. Protótipo da Função (Usa Ponteiro) ---
// O array é passado como ponteiro, e o tamanho indica quantos elementos processar.
void exibir_melhor_jogador(jogador* time, int tamanho);

// --- 3. Função com Retorno (Calcula um valor) ---
// Retorna a soma de todos os gols. Recebe o array como ponteiro.
int somar_gols_time(jogador* time, int tamanho){
    int totalGols = 0;

    // usando o FOR para percorrer o array
    for (int i =  0; i < tamanho; i++){
        // Acesso ao membro da struct usando a notacao de ponteiro + indice: (time + i)
        // Isso é o mesmo que: totalGols += time[i].golsTemporada;
        totalGols += (time + i) ->golsTemporada;

        // Explicacao:
        // (time + i)  -> E o endereco do Jogador na posicao 'i' (Aritmetica de Ponteiros)
        // ->golsTemporada -> E o operador de seta, usado para acessar um membro de uma struct/classe atraves de um ponteiro.
    }
    return totalGols; // Retorna o valor inteiro (int)
}

// --- 4. Funcao que Recebe Ponteiro e Usa Logica Condicional ---
void exibir_melhor_jogador(jogador* time, int tamanho){
    // Declaramos um ponteiro para o melhor jogador, inicializando-o com o primeiro elemento.
    jogador* melhor = time;
    int maxGols = time ->golsTemporada; // Acessa o gol do primeiro jogador

    // Percorre do segundo jogador (i=1) ate o final
    for (int i = 1; i < tamanho; i++)
    {
        if ((time + i)->golsTemporada > maxGols)
        {
            maxGols = (time + i) ->golsTemporada;
            melhor = (time + i); // O ponteiro 'melhor' agora aponta para este novo jogador
        }
        
    }
    // Exibindo o resultado usando o ponteiro 'melhor'
    cout << "\n--- MELHOR JO0GAADOR ---" << endl;
    cout << "Nome: " << melhor->nome << endl;
    cout << "Gols: " << melhor->golsTemporada << endl;
    cout << "Camisa:" << melhor->numeroCamisa << endl;
    

}

int main (){

    // Definindo o tamanho do array
    const int TAMANHO_TIME = 3;

    // --- criando e inicializacao do array de struct ---
    jogador timeTitular[TAMANHO_TIME] = {
        {10, "Ronaldo", 25},
        { 7, "Messi", 30},
        { 9, "Mbappe", 18}
    };

    // --- Chamadas de Funcao ---

    // Chamada 1: Somar Gols (Calcula o total e retorna um int)
    // Passamos o nome do array (que e o ponteiro para o primeiro elemento)
    int total = somar_gols_time(timeTitular, TAMANHO_TIME);
    cout << "Total de Gols do Time na Temporada: " << total << endl; 

    // Chamada 2: Exibir Melhor Jogador (Encontra o elemento e exibe - void)
    exibir_melhor_jogador(timeTitular, TAMANHO_TIME);

return 0;

}