#include<iostream>
#include "poo-get-set.h"

using namespace std;

int main(){
    
        // vou criar um objeto da classe veiculo
        veiculo transporte(0); // aqui está com zero, pois tem um erro, onde se não passar um valor o programa encerra, e se escolhe um valor da lista, ele pergunta qual a opção.

        //Aqui no main para obter o velmax eu chamo o getvelmax
        cout << "velocidade maxima: " << transporte.getvelmax() << endl;
        cout << "Estado: " << transporte.getestado() << endl;

        

    return 0;
}