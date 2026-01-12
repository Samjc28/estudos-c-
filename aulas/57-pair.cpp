/*O std::pair é uma ferramenta extremamente útil e simples da biblioteca padrão do C++ (definida no header <utility>). Ele serve para agrupar dois valores que podem ser de tipos diferentes em uma única unidade.
Imagine que você quer guardar o nome de um aluno e a sua nota, ou as coordenadas X e Y de um ponto. Em vez de criar uma struct para tudo, você pode usar um pair.
Um pair possui dois membros públicos chamados first e second.
*/

#include<iostream>
#include<utility> // biblioteca para pode usar o pair
#include<string>

using namespace std;


int main(){
/*
    //EXEMPLO DE COMO FAZER UM PAIR
    // criando uma estrutura pair
    pair<int, string> produto; // possivél iniciar com os valor produto(10, "mouse") mais vou usar outro jeito

    // o first e o secund, eles controlando essas posiçoes 
    produto.first = 50; // atribuindo um valor para o int 
    produto.second = "mouse"; // valor para a string 
    // imprimindo
    cout << "Valor: " << produto.first << " Nome: " << produto.second << "\n";
*/
    // VEREMOS COMO FAZER COM VETOR.
/*
    const int tam{3}; 

    pair<int, string> par[tam];

    par[0].first = 10;
    par[0].second = "carta";

    par[1].first = 20;
    par[1].second = "mesa";

    par[2].first = 30;
    par[2].second = "copos";

    // imprimindo, para os demais valores mudar a posição do index
    cout << "Valor: " << par[0].first << " Nome: " << par[0].second << "\n";    
*/

// Utilizando o make_pair para criar um pair

    const int tam{3};

    pair<int, string> cadastro[tam];

    cadastro[0] = make_pair(10, "joelson");
    cadastro[1] = make_pair(20, "samuel");
    cadastro[2] = make_pair(30, "correa");

    for (int i = 0; i < tam; i++)
    {
        cout << "Valor: " << cadastro[i].first << " Nome: " << cadastro[i].second << "\n";
    }
    
    //cout << "Valor: " << cadastro[0].first << " Nome: " << cadastro[0].second << "\n";



    return 0;
}