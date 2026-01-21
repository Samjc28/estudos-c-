/*O std::for_each é um algoritmo da biblioteca <algorithm> projetado para aplicar uma função a cada elemento de um intervalo. Enquanto o loop for tradicional é uma estrutura de controle da linguagem, o for_each é uma ferramenta funcional que separa a iteração (o ato de percorrer) da lógica (o que fazer com cada item).

1. Modificando Valores com Lambda
Para alterar os elementos originais de um contêiner, você deve passar o parâmetro da lambda por referência (&). Caso contrário, a lambda trabalhará apenas com uma cópia.

2. std::for_each vs Range-based for
Embora o for (auto x : v) seja mais comum no dia a dia por sua simplicidade, o std::for_each oferece vantagens em cenários específicos

A Modernidade do C++20: std::ranges::for_each
Com o C++20, não precisamos mais passar os iteradores .begin() e .end() manualmente. Além disso, ele introduziu as projeções, que permitem agir sobre membros específicos de uma struct sem esforço extra.


*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> n {0, 3, 6, 9, 12, 15, 18};

    // utilizando o for_each
    for_each(n.begin(), n.end(), [](int num) {cout << num*2 << endl;});



    return 0;
}