/*Um mapa armazena elementos em pares " chave/valor ".
Os elementos de um mapa são:
Acessível por chaves (não por índice), e cada chave é única.
Classificados automaticamente em ordem crescente pelas suas chaves.
Para usar um mapa, você precisa incluir o <map>arquivo de cabeçalho:

Para criar um mapa, use a map palavra-chave e especifique o tipo da chave e do valor que ela deve armazenar entre colchetes angulares <>. Por fim, especifique o nome do mapa, como: :map<keytype, valuetype> mapName
ex: map<string, int> people

Se você deseja adicionar elementos no momento da declaração, coloque-os em uma lista separada por vírgulas, dentro de chaves {}:
Exemplo: map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

Não é possível acessar elementos de um mapa referenciando números de índice, como se faz com arrays e vetores .
Em vez disso, você pode acessar um elemento do mapa referenciando sua chave entre colchetes []
cout << "John is: " << people["John"] << "\n";
Você também pode acessar elementos com a .at()função:
cout << "Adele is: " << people.at("Adele") << "\n";
Nota: A .at()função é frequentemente preferida em relação aos colchetes []porque gera uma mensagem de erro caso o elemento não exista:
*/

#include<iostream>
#include<map>

using namespace std;


int main (){

    // criando um map definir um tipo para a chaves e outro para o valor
    // o int é para a chave e a string é para o valor.
    map<int, string> pessoa;

    // atribuindo elemento pelo vetor, a chave fica dentro do []
     pessoa[0] = "Joelson"; // o joelson é a chave e ele vai receber um valor do tipo string
     pessoa[1] = "Samuel"; // o joelson é a chave e ele vai receber um valor do tipo string
     pessoa[2] = "Correa"; // o joelson é a chave e ele vai receber um valor do tipo string

    // usando o for para imprimir // for normal
  //  for (int i = 0; i < 3; i++)
    //{
      //  cout << "Dados: " << pessoa[i] << endl; // o I é referente a chave a saida será do valor

    // for moderno 

   // for (auto it = pessoa.begin(); it != pessoa.end(); it++){
    //   cout << "Dados: " << it->first << endl;
    //}
    // Nesse formato para imprimir o valor das chaves usar o first e para o valor usar o second

    // vamos fazer o uso do insert, pelo precisa de um par. fazemos o uso do pair
    // adicionar mais indice, poderia copia e colar essa, masi se remover as // dos dados em cima ele vai ler e mostra na tela
    
    pessoa.insert(pair<int, string>(/*AQUi está vazio pq os dados estão em cima*/));

    for (auto it = pessoa.begin(); it != pessoa.end(); it++){
      cout << "Dados: " << it->second << endl;
    }


    return 0;
}