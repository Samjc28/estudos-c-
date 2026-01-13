// para fazer um pair que recber 3 par usamos um pair dentro de outro
#include<iostream>
#include<utility> // biblioteca para pode usar o pair
#include<string>

// POderia fazer com vector, porem usei array
using namespace std;


int main(){
    const int tam{3};

    pair<int,pair< string, double>> estoque[tam];

    estoque[0] = make_pair(10, make_pair("teclado", 65.88));
    estoque[1] = make_pair(20,make_pair("fone", 33.49));
    estoque[2] = make_pair(30, make_pair("mouse", 26.99));

    for (int i = 0; i < tam; i++)
    {
        // estrutuara para imprimir os valores armazenado no pair com outro pair
        cout << "Qtd: " << estoque[i].first << " Nome: " << estoque[i].second.first << " Preco: "<< estoque[i].second.second << "\n";
    }

    return 0;
}