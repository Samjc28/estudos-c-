/* A difrença da classe fstream para as outras duas é que com ela podemos tanto ler como escrever em arquivos*/
// Nela não preciso criar um objeto para entrda e outro para a saida, com um objeto posso fazer as duas coisas.

/*Nesse exemplo de uso vou cirar um programa vai receber do teclado e salva, e pergurta de deseja adc mais.*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstdlib>

using namespace std;

int main(){

    // criei um vecto do tipo string para receber os nome digitados.
    vector<string> listanome;
    string nometemp;
    char adc = 'S';

    // criando um objeto do tipo fstream
    // aqui eu preciso definir se o arquivo vai de entrada ou de saida.
    fstream dir;
    dir.open("Arquivos_nomes.txt", ios::out | ios::app);

    if (!dir.is_open())
    {
        cout << "Erro ao abrir o arquivo! " << endl;
        return 1;
    }

    while (adc == 'S' || adc == 's')
    {
        cout << " Digite o nome para ser salvo: \n"; 
        getline(cin >> ws, nometemp);

        listanome.push_back(nometemp);
        // salvando
        dir << nometemp << endl;
         // usamos o const auto& para não copia a string
        cout << "--- Lista de nome na memoria ---" << endl;
        for (const auto& Nome : listanome){
            cout << " Nome: " << Nome << endl;
            cout << " Deseja adiciona mais nomes [S/n] ? " << endl;
            cin >> adc;
            break;
        }
    }

    dir.close();
    system("pause");
    return 0;
}