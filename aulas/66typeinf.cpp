/*-A <typeinfo> é uma biblioteca padrão do C++ usada para o que chamamos de RTTI (Run-Time Type Information), ou Informação de Tipo em Tempo de Execução.
Basicamente, ela serve para o programa saber "quem é quem" enquanto está rodando, especialmente quando lidamos com polimorfismo (classes pai e filhas).

Para que servem os principais recursos?
A biblioteca disponibiliza, principalmente, o operador typeid e a classe type_info.

1. O Operador typeid
Ele permite verificar o tipo real de uma variável ou objeto durante a execução.

Em tipos comuns: Se você usar em um int, ele retorna que é um int.

Em polimorfismo: Se você tem um ponteiro de uma classe Base que aponta para uma classe Derivada, o typeid consegue te dizer que, na verdade, aquele objeto é da classe Derivada.

2. A Classe type_info
É o objeto retornado pelo typeid. Ela contém métodos úteis:

.name(): Retorna uma string com o nome do tipo (embora o formato dependa do compilador).

Operadores == e !=: Para comparar se dois objetos são do mesmo tipo.

.before(): Usado para ordenação interna de tipos.

Quando usar?
Debugging: Para confirmar se um objeto é o que você espera.

Sistemas de Logs: Para registrar quais tipos de objetos estão passando por uma função genérica.

Segurança: Antes de fazer um static_cast arriscado, você pode verificar o tipo.

Nota de "pé de página": O uso excessivo de typeinfo em sistemas de alta performance é evitado, pois o RTTI adiciona um pequeno custo de processamento e memória ao programa.
*/
#include <iostream>
#include <typeinfo> // Necessário para usar typeid

class Animal { virtual void fazerSom() {} };
class Cachorro : public Animal {};

int main() {
    int numero = 10;
    Animal* pet = new Cachorro();

    // Verificando tipos simples
    std::cout << "Tipo de numero: " << typeid(numero).name() << std::endl;

    // Verificando tipos em hierarquia (Polimorfismo)
    if (typeid(*pet) == typeid(Cachorro)) {
        std::cout << "O pet e realmente um Cachorro!" << std::endl;
    }

    return 0;
}