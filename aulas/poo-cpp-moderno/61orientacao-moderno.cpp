

#include<iostream>
#include<string>

using namespace std;

class pessoa{
    public:
        string nome;
        int idade;


};
void insirir_dados(pessoa &p);

int main(){
    pessoa p1;
    insirir_dados(p1);    

    return 0;
}

void insirir_dados(pessoa &p){
    cout << "Informe seu nome" << endl;
    getline(cin, p.nome);

}