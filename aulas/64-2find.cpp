/*Vamos simular um Sistema de Gestão de Biblioteca.
Neste programa, vamos unir tudo o que vimos:
struct: Para representar um Livro.
vector: Para armazenar o acervo.
using namespace std;: Para facilitar a leitura.
find_if: Uma variação do find que é necessária quando trabalhamos com objetos complexos,
pois precisamos dizer ao C++ qual campo queremos comparar (por exemplo, buscar pelo título).*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Necessário para find_if

using namespace std;

// Definindo nossa estrutura de dados
struct Livro {
    int id;
    string titulo;
    string autor;

    // Construtor simples para facilitar a criação
    Livro(int _id, string _titulo, string _autor) {
        id = _id;
        titulo = _titulo;
        autor = _autor;
    }
};

int main() {
    // Criando nosso acervo (vetor de objetos)
    vector<Livro> biblioteca;
    biblioteca.push_back(Livro(101, "O Alquimista", "Paulo Coelho"));
    biblioteca.push_back(Livro(102, "Dom Casmurro", "Machado de Assis"));
    biblioteca.push_back(Livro(103, "C++ Moderno", "Bjarne Stroustrup"));
    biblioteca.push_back(Livro(104, "Harry Potter", "J.K. Rowling"));

    string busca;
    cout << "--- SISTEMA DA BIBLIOTECA ---" << endl;
    cout << "Digite o titulo do livro que deseja buscar: ";
    getline(cin, busca); // Usamos getline para aceitar espaços no título

    // O find_if percorre a lista e usa uma "Lambda" (função temporária)
    // para comparar o título de cada livro com a nossa busca.
    auto it = find_if(biblioteca.begin(), biblioteca.end(), [busca](Livro l) {
        return l.titulo == busca;
    });

    cout << "\nProcessando busca..." << endl;

    // Verificando o resultado
    if (it != biblioteca.end()) {
        cout << "LIVRO ENCONTRADO!" << endl;
        cout << "---------------------------" << endl;
        cout << "ID: " << it->id << endl;
        cout << "Titulo: " << it->titulo << endl;
        cout << "Autor: " << it->autor << endl;
        cout << "---------------------------" << endl;
    } else {
        cout << "Sinto muito. O livro '" << busca << "' nao consta no acervo." << endl;
    }

    return 0;
}