/*O Polimorfismo é frequentemente considerado o "toque de mestre" da Orientação a Objetos. A palavra vem do grego e significa "muitas formas".
Em C++, o polimorfismo permite que você trate objetos de diferentes classes (que herdam de uma mesma mãe) como se fossem do mesmo tipo, mas cada um se comporta à sua maneira quando você chama um método.

O Conceito: A Interface Comum
Lembra dos nossos animais? Todos fazem som, mas o som é diferente.

Se eu tiver uma lista de 10 animais variados e disser "Emitam Som!", o polimorfismo garante que o cachorro faça "Au Au" e o gato faça "Miau", sem que eu precise perguntar "quem é você?" para cada um.

Os Ingredientes Necessários
Para que o polimorfismo funcione em C++, precisamos de três coisas:

Herança: As classes filhas devem herdar de uma classe base.

Métodos Virtuais (virtual): A classe mãe deve avisar que um método pode ser sobrescrito pelas filhas.

Ponteiros ou Referências: O polimorfismo só "desperta" quando acessamos os objetos através de ponteiros ou referências da classe base.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- CLASSE MÃE (BASE) ---
class Animal {
protected:
    string nome;

public:
    Animal(string n) : nome(n) {}

    // A palavra 'virtual' é a chave! 
    // Ela permite que as filhas substituam este comportamento.
    virtual void emitirSom() {
        cout << nome << " emite um som desconhecido." << endl;
    }

    void comer() {
        cout << nome << " esta comendo..." << endl;
    }

    // Destrutor virtual: essencial ao usar polimorfismo para evitar vazamento de memoria
    virtual ~Animal() {} 
};

// --- CLASSES FILHAS (DERIVADAS) ---

class Cachorro : public Animal {
public:
    Cachorro(string n) : Animal(n) {}

    // 'override' indica que estamos de fato mudando o som para este animal
    void emitirSom() override {
        cout << nome << " diz: AU AU!" << endl;
    }
};

class Gato : public Animal {
public:
    Gato(string n) : Animal(n) {}

    void emitirSom() override {
        cout << nome << " diz: MIAU!" << endl;
    }
};

// --- FUNÇÃO PRINCIPAL ---
int main() {
    // 1. Criamos um vetor que guarda PONTEIROS de Animal.
    // Isso é necessário porque o polimorfismo só funciona via ponteiro ou referência.
    vector<Animal*> fazenda;

    // 2. Adicionamos tipos diferentes na mesma lista de "Animais"
    fazenda.push_back(new Cachorro("Caramelo"));
    fazenda.push_back(new Gato("Jujuba"));
    fazenda.push_back(new Animal("Bicho Generico"));

    cout << "--- HORA DO BARULHO (Polimorfismo em acao) ---" << endl;

    // 3. O Loop da Magia:
    // Tratamos todos como 'Animal*', mas o C++ decide o som correto em tempo de execucao.
    for (Animal* animal : fazenda) {
        animal->emitirSom(); 
    }

    // 4. Limpeza de memória (Sempre que usar 'new', use 'delete')
    for (Animal* animal : fazenda) {
        delete animal;
    }

    return 0;
}