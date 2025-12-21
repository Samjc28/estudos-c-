/*O que é POO de forma simples?
Imagine que você quer programar um controle remoto.
Na programação comum (procedural), você teria variáveis soltas como volume, canal e funções como aumentarVolume().
Na POO, você cria uma "planta" (blueprint) chamada ControleRemoto. Essa planta contém tanto as características (volume, canal) quanto os comportamentos (ligar, trocar canal).
Essa planta é o que chamamos de Classe. O controle físico que você segura na mão é o Objeto.

2. Os 4 Pilares da POO
Para o seu curso, você vai ouvir muito sobre estes quatro termos. Vamos resumi-los:
Abstração: Trazer apenas o que é importante para o código. (Ex: Para um sistema de escola, o Aluno precisa de nome e nota, não da cor dos olhos).
Encapsulamento: "Esconder" os dados sensíveis dentro do objeto. Usamos as palavras public e private.
Herança: Uma classe pode "herdar" características de outra. (Ex: Um Carro e uma Moto herdam de Veiculo).
Polimorfismo: Um mesmo comando pode se comportar de formas diferentes. (Ex: A função fazerSom() no objeto Cachorro late, mas no Gato mia).*/

#include<iostream>

using namespace std;

// crio o objeto antes da função main

// criando a classe
// isso é apernas a classe. instancia é o obejto.
class carro {

    private:

    public:
    // As propriedades não recebram valor, mas poderia adc. ex: combustivel =  gasolina;
        string fab;
        int velocidade_atual;
        string combustivel;
        string velMax;

        // aqui vou criar uma função para que quando chamar o tipo do carro,ele vai dizer a velocidade que esse carro atingir. 
        // esse aqui é o prototipo da função.
        void ini(int fb); //ini é um método de inicialização criado manualmente para configurar os atributos do objeto logo após ele ser criado.
        // Dentro do metedo ini vou verificar qual a fabricante foi passado, e vou definir a velocidade maxima, em decorencia do fab passado no metedo ini.
    };
    // o metedo ini vou concluir fora da classe 
    //:: chama-se Operador de Resolução de Escopo.
    /*
    Este método ini não é uma função qualquer solta no programa; ele pertence à classe carro". É como se fosse o sobrenome de uma pessoa. Se você falar apenas "ini", o C++ não sabe de quem você está falando. Quando você escreve carro::ini, você está dando o nome completo: "O método ini da família (classe) carro".
    */
   // 1 == Ford Ka, 2 == Fiat punto, 3 == Volkswagen tera
    void carro ::ini(int fb){
        if(fb == 1) {
            this ->velMax = "180Km/h "; //this: Ele é usado para garantir que o programa saiba que estamos alterando as variáveis daquela instância específica da classe.
            this ->fab = " Ford_ford-Ka ";
        }else if (fb == 2){
            {
             this ->velMax = "210Km/h ";
             this ->fab = " Fiat_Punto "; 
            } 
        }else if(fb == 3)
            {
             this -> velMax = "280Km/h ";
             this ->fab = " Volkswagen_tera";
            }

    }

int main() {

    // Agora vou fazer uso da classe carro.
    // crei um objeto aparti da classe carro de nome carFox, e é preciso passar como ponteiro.
    carro *car = new carro(); // esse metedo é a base antiga,hj em dia não preciso declarar como ponteiro.
    // para mostra, exibir o conteudo do objeto
    // em outras linguagens se usar o ( . ) aqui em C++ usamos a seta -> 
    // Como não não tem nada em combustivél, não mostra nada.

    // Agora vou chama esse metedo ini e inicializa car e exibir na tela os valores
    car->ini(3);
    // mostrando na tela os valores
    cout << car->velMax;
    cout << car->fab;


    return 0; 
}
/*O new serve para alocar memória durante a execução do programa (memória dinâmica).
Controle de Ciclo de Vida: Sem o new, o objeto é criado na memória Stack e destruído automaticamente assim que a função onde ele foi criado termina. Com o new, o objeto vive na memória Heap até que você decida deletá-lo.
Flexibilidade: Permite criar objetos cujo número ou tamanho você só descobre enquanto o programa está rodando (assim como o std::vector faz internamente).*/

/*Por que é preciso passar como ponteiro?
No C++, a função new não retorna o objeto em si, mas sim o endereço de memória onde esse objeto foi guardado.
O que é o ponteiro: O ponteiro (indicado pelo asterisco *) é a variável que armazena esse endereço. Por isso, declaramos Avião *av1 = new Avião();.
Sintaxe da Seta (->): Como av1 não é o objeto, mas um endereço, o C++ exige que você use a seta para "seguir" esse endereço e acessar os dados lá dentro.*/