/*Um array é uma coleção de elementos do mesmo tipo de dado, armazenados em blocos de memória contíguos (sequenciais).
Essa característica de armazenamento contíguo é o que torna os arrays extremamente eficientes para acesso a dados. Se você sabe a posição (ou índice) de um elemento, o computador pode acessá-lo instantaneamente, sem precisar "procurar" por ele.
Um array funciona como uma série de caixas enfileiradas, onde cada caixa armazena um item do mesmo tipo. Para acessar um item, você precisa saber o número da caixa.
Declaração: Para criar um array, você precisa definir o tipo de dado dos elementos e o tamanho do array.
para criar um vetor preciso indicar o tipo de dado que ele vai armazenar(ex: int, float, string) adicionar um nome e o tamanho desse vetor. 
Os espaços dos vetores são indices, para possamos acessar esses espaços usamos a posição desses indice, começando em [0]
*/
/*Agora para que eu possa usar um array muito grande uso o loop for*/

#include <iostream>

using namespace std;


int main(){

    // criando uma array/vetor
    // esse vetor equivale a uma variavél que gurada 10 valores. int vetor0, vetor1, vetor2... até o vetor9.
    int tam = 10;
    int vetor[tam] = {10,20,30,40,50,60,70,80,90,100}; //criei um vetor do tipo inteiro que vai guarda 10 valores. aqui estou add. os valores das posições
    int i; // essa variavél vai servi para ler os dados do array no loop for

    // adicionando valor ao indice 0 que seria a primeira posição da lista.
    // add valores até a quinta posição
    /*vetor[0] = 50;
    vetor[1] = 55;
    vetor[2] = 60;
    vetor[3] = 65;
    vetor[4] = 70;
    vetor[5] = 75;
    vetor[6] = 80;
    vetor[7] = 85;
    vetor[8] = 90;
    vetor[9] = 95;
    */
    // essa é uma forma simples de usar array
    // para exibir os valores que estão dentro do vetor uso um cout

    //cout << "valor: " << vetor[0] << endl; // será exibido o valor da primeira posição.
    
    // usuando o loop for para trabalhar com o array
   /* for ( i = 0; i < 5; i++)
    {
        cout << " Os valores nas possições dos vetores são: " << vetor[i] << endl; // coloco o nome do array com a var i pois ela que tem as posições
       //para mostra todas as posições não precisar colocar o i++ de incremento, se colocar ele ira pular, exibir,pular exibir.
    }
    */
    
    // Agora se cso mude o tamanho do vetor, teria que mudar manualmente esse tamanho, para isso usamos o sizeof()
    // cuidados com sizeof(), pois o sizeof vai retorna o tamanho em bytes do tipo do vetor nesse caso o int tem 4bytes. para não gerar error faço a divisão pelo tamanho do dado que estou usando.
  
  /*  for ( i = 0; i < sizeof(vetor) / 4 ; i++)
    {
        cout << " Os valores nas possições dos vetores são: " << vetor[i] << endl; // coloco o nome do array com a var i pois ela que tem as posições
       //para mostra todas as posições não precisar colocar o i++ de incremento, se colocar ele ira pular, exibir,pular exibir.
    }
    */


    // caso eu não faça a divisão ele vai retorna lixo da memoria.

    // também poderia criar uma variavél tamanho que receber o tamanho do vetor é o vetor[teria essa variavél aqui dentro], no loop for eu usaria a var do tamanho do vetor em vez do sizeof()

     for ( i = 0; i < tam; i++)
    {
        cout << " Os valores nas possições dos vetores são: " << vetor[i] << endl; // coloco o nome do array com a var i pois ela que tem as posições
       //para mostra todas as posições não precisar colocar o i++ de incremento, se colocar ele ira pular, exibir,pular exibir.
    }
    
    return 0;
}