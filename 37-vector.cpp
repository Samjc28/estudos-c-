/*Vector como um array (vetor) inteligente. No C++ básico, quando você cria um array comum, precisa dizer o tamanho dele logo de cara e não pode mudar depois. O Vector é diferente: ele cresce e diminui sozinho conforme você adiciona ou remove itens.*/
/*Para usar, você precisa incluir a biblioteca <vector> e declarar o tipo de dado que ele vai guardar.*/
// EXEMPLO DE CRIAÇÃO DE VECTOR
/*#include <iostream>
#include <vector> // Essencial!
int main() {
    // Criando um vector de números inteiros
    std::vector<int> numeros; 
    
    return 0;
}*/
//As 4 Operações de Sobrevivência
/*push_back(valor): Adiciona um item ao final do vector.
size(): Diz quantos elementos existem lá dentro.
at(indice) ou []: Acessa um elemento (lembrando que começa no 0).
pop_back(): Remove o último item.*/

/* Por que usar Vector e não Array comum?
Característica ArrayComum (int arr[5]) Vector (std::vector<int>)
Tamanho Fixo(estático) Dinâmico(muda a qualquer hora)
Memória Stack(Geralmente )Heap(Gerenciado automaticamente)
Segurança Difícil de controlar limites Possui métodos como .at() que evitam erros*/
/*Sempre que você for percorrer um vector, prefira usar o "Range-based for loop" (o "for" moderno do C++). É muito mais limpo:*/
/*for (int n : numeros) {
    std::cout << n << " ";
}*/

#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<string> listaDeCompras;
    string item;
    char continuar;

    cout << "--- Minha Lista de Compras Dinamica ---" << endl;

    do {
        cout << "Digite o nome do produto: " << endl;
        cin >> item;

        listaDeCompras.push_back(item); // Adiciona ao final do vector

        cout << "Deseja adicionar outro item ? (S/n) " << endl;
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');
        cout << "\nSua lista final tem " << listaDeCompras.size() << " itens" << endl;

        // usando o loop mooderno para exibir
        for (const string& produto : listaDeCompras){
            cout << "- " << produto << endl;
        }
    
    



    return 0;
}