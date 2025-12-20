/* (abreviação de enumeration) é um tipo de dado em C++ que permite definir um conjunto de constantes inteiras nomeadas. Em termos mais simples, um enum cria uma lista de nomes simbólicos que representam valores numéricos.
A principal utilidade do enum é tornar o código mais legível e menos propenso a erros. Em vez de usar números "mágicos" (como 1 para segunda-feira, 2 para terça-feira, etc.), você pode usar nomes que fazem sentido (Segunda, Terca).
Pense no enum como uma forma de dar um nome significativo a um conjunto de números inteiros, criando um novo tipo de dado.*/

/*Por que Usar enum?
Legibilidade: O código fica muito mais fácil de ler e entender. if (dia == Terca) é infinitamente mais claro que if (dia == 2).

Segurança de Tipo (em C++11 e superior): Existem dois tipos de enum em C++. A versão mais antiga (simplesmente enum) tem algumas peculiaridades, mas a versão moderna enum class introduzida no C++11 é mais segura. Ela evita conversões automáticas para int, forçando você a ser explícito, o que previne erros.

Manutenção: Se você precisar adicionar mais um dia à lista, você só precisa alterar a declaração do enum, e o compilador irá avisá-lo se houver algum erro.*/

#include <iostream>

using namespace std;

// enum para os tipos de municao
enum class TipoMunicao {
    Padrao,      // 0
    Explosiva,   // 1
    Perfurante,  // 2
    Fogo         // 3
};

// enum para o estado de recarga
enum class EstadoRecarga {
    Iniciada,
    EmAndamento,
    Completa
};

// Funcao que simula o disparo de uma arma
// Ela recebe um tipo de municao como argumento
void disparar(TipoMunicao tipo);


int main() {
    TipoMunicao municaoAtual = TipoMunicao::Explosiva;
    EstadoRecarga recargaAtual = EstadoRecarga::Iniciada;
    
    // A logica do jogo usa o enum para tomar decisoes
    if (recargaAtual == EstadoRecarga::Iniciada) {
        cout << "Recarga iniciada..." << endl;
        // ... logica de recarga ...
        recargaAtual = EstadoRecarga::Completa;
    }

    if (recargaAtual == EstadoRecarga::Completa) {
        cout << "Recarga completa! Disparando municao... ";
        disparar(municaoAtual); // A funcao sabe o que fazer com a municao explosiva
    }

    // Trocando de municao e disparando novamente
    municaoAtual = TipoMunicao::Perfurante;
    cout << "\nTroca de municao!" << endl;
    disparar(municaoAtual);

    return 0;
}

// Funcao que simula o disparo de uma arma
// Ela recebe um tipo de municao como argumento
void disparar(TipoMunicao tipo) {
    // Usando switch com enum para logica clara e segura
    switch (tipo) {
        case TipoMunicao::Padrao:
            cout << "Disparando tiro padrao. Dano regular." << endl;
            break;
        case TipoMunicao::Explosiva:
            cout << "BOOM! Dano explosivo em area!" << endl;
            break;
        case TipoMunicao::Perfurante:
            cout << "Pew! Disparo perfurante que ignora armadura." << endl;
            break;
        case TipoMunicao::Fogo:
            cout << "Fshhh! Tiro de fogo que causa dano ao longo do tempo." << endl;
            break;
        default:
            cout << "Tipo de municao desconhecido." << endl;
            break;
    }
}

/*enum vs. enum class (A Diferença Importante)
Característica	enum (Tradicional)	enum class (Moderno, a partir de C++11)
Escopo	Os nomes são visíveis globalmente. Ex: Terca.	Os nomes são restritos ao enum. Ex: DiasDaSemana::Terca.
Conversão	Converte implicitamente para int.	Não converte implicitamente. Mais seguro.
Tipo de dado	É um tipo int.	É um tipo distinto e forte (strong type).*/