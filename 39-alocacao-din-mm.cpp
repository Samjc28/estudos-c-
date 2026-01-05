/*parta um sistema que vai receber varios nomes vamos usare o vector e string pra armazenar*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    // lista dianamica de strings

    vector<string> listaDeNomes;
    string nomeTemporario;
    char continuar;

    do {
        cout << " Digite os nome: ";
        // o getline le a linha interia, mesmo com os espaços
        getline(cin >> ws, nomeTemporario);

        // o vector guarda a string
        listaDeNomes.push_back(nomeTemporario);
        
        cout << " Deseja adicionar outros? (S/n): ";
        cin >>continuar;

    } while (continuar == 'S' || continuar == 's');
    {
        cout << "\n--- Lista dos nomes adicionados ---\n";

        // usamos o const auto& para não copia a string
        for (const auto& nome : listaDeNomes){
            cout << " Nome: " << nome << " | Espaso usado: " << nome.size() << " Bytes" << endl;
            // o  nome.size() << " Bytes" é para vemos quanto espaços foi usado para guarda os nome.
        }
    }
    

    return 0;
}