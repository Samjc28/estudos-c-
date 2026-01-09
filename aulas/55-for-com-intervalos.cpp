/* Esse é um for mais simplificado, onde podemos usar em coleções que podem ser iteradas*/
/*
Ex: vector<int>n{1,2,3,4,5}

for(auto i:n){
    cout << i << endl;
}
*/

#include<iostream>

using namespace std;

int main(){

    // criando um vetor
    int x[10]{0,1,2,3,4,5,6,7,8,9};

    // fazendo uso do for tradicional
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << endl;
    }
    
    cout << "\n";
    
    // utilizando o novo for
    // funciona assim, criare um variavél que vai receber os elementos da estrutura
    for(auto i:x){
        cout << i << endl;
    }
    


    return 0;
}