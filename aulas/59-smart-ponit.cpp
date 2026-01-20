/*Os Smart Pointers (ponteiros inteligentes) são, possivelmente, a inovação mais importante do C++ moderno para evitar dores de cabeça. Eles foram criados para resolver o maior problema dos programadores C++: o gerenciamento manual de memória.
Antigamente, se você usasse new, era obrigado a lembrar de usar o delete. Se esquecesse, acontecia um Memory Leak (vazamento de memória). O Smart Pointer automatiza isso: quando ele "morre" (sai do escopo), ele limpa a memória sozinho.
Eles estão definidos na biblioteca <memory>.*/

/*std::unique_ptr (O dono único)
Este é o mais comum e eficiente. Ele garante que apenas um ponteiro seja dono daquele objeto na memória. Você não pode copiá-lo, apenas movê-lo.
Uso: Quando um objeto tem um único dono claro.
Vantagem: Custo zero de performance em relação ao ponteiro comum.*/

/*std::shared_ptr (O dono compartilhado)
Vários shared_ptr podem apontar para o mesmo objeto. O C++ mantém um contador de referências. O objeto só é deletado quando o último shared_ptr que apontava para ele for destruído.
Uso: Quando várias partes do código precisam acessar e manter vivo o mesmo objeto.*/

/*std::weak_ptr (O observador)
Ele aponta para um objeto que é dono de um shared_ptr, mas não aumenta o contador. Ele serve para olhar o objeto sem impedir que ele seja deletado.
Uso: Para evitar "ciclos de referência" (quando dois objetos apontam um para o outro e nunca são deletados).*/



#include <iostream>
#include <memory>
#include <string>

using namespace std;

// 1. Apenas avisamos que a struct existe
struct Dono; 

struct Cao {
    string nome;
    weak_ptr<Dono> dono;

    Cao(string n) : nome(n) { 
        cout << "[Cons] Cao " << nome << " nasceu." << endl; 
    }
    
    ~Cao() { 
        cout << "[Dest] Cao " << nome << " morreu." << endl; 
    }

    // 2. Apenas declaramos a função aqui (sem o corpo {})
    void latir(); 
};

struct Dono {
    string nome;
    shared_ptr<Cao> pet;

    Dono(string n) : nome(n) { 
        cout << "[Cons] Dono " << nome << " criado." << endl; 
    }
    
    ~Dono() { 
        cout << "[Dest] Dono " << nome << " destruido." << endl; 
    }
};

// 3. Agora que o compilador já conhece o Dono por completo,
// definimos o que a função latir() faz:
void Cao::latir() {
    if (auto d = dono.lock()) {
        // Agora o compilador sabe que d->nome existe!
        cout << nome << " diz: Au Au! Meu dono e o " << d->nome << endl;
    } else {
        cout << nome << " esta latindo, mas nao tem dono por perto." << endl;
    }
}

int main() {
    {
        auto pessoa = make_shared<Dono>("Carlos");
        auto animal = make_shared<Cao>("Rex");

        pessoa->pet = animal;
        animal->dono = pessoa;

        animal->latir();
    } 

    cout << "Fim do programa." << endl;
    return 0;
}