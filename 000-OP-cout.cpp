/* trabalhando com cout é formatando a saida*/
#include <iostream>
#include<math.h>

using namespace std;


// posso uitilizar uma biblioteca <iomanip> para fazer a conversão 
// cout << setbase(8) << num << endl; desse modo vou converte o valor da variavél para oct, ou para qualquer outra pela colocando o numero. 
int main () {
    cout << "Saidas formatadas! " << "\n";

    // decimal
    int num = 15;
    cout <<"O valor da variavel em decimal: " << num << endl;

    // hexadecimal,  para base octadecimal colocamos o oct no lugar do hex e o dec para converte na base decimal
    cout << "O valor da variavel em hexadecimal: "  << hex << num << endl; // quando utiliz o hex antes da var, ele vai converte para hexadecimal o valor

    // Agora para dizer quantas casas decimais colocar usamos a biblioteca <math.h> e o .precision(numeros_de_casas)
    
    float pi = M_PI; // estou chamando o math para pegar o numero do pi que já esta nele

    // aqui sem está com o metedo precision
    cout << "Valor de PI: " << pi << endl;

    // Aqui vou colocar o cout com precision 
    cout.precision(3); //  aqui vai ter duas casas depois da virgula
    cout << "Valor de PI: " << pi << endl;


    // caso eu queira mudar o espaçament, a distancia do numero, uso no cout o setw(valor da largura)
    // cout << "Valor de num: " << setw(5) << num << endl; desse jeito o num vai fica 5 espaço afastado.
    // O setfill() vai prencher o espçao do setw com caractere que colocamos nos ()
}