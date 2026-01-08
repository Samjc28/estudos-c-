/*Classes de Armazenamento focando no que realmente importa para quem está programando em C++ hoje.
Essas classes são instruções que você dá ao compilador sobre a natureza da variável: onde ela mora, quem a vê e quanto tempo ela dura.*/

/*
auto (Automática)
No C++ moderno, a classe auto é usada para Dedução de Tipo. Em vez de você dizer o tipo, o compilador olha para o valor e decide por você.
Regra: Você deve inicializar a variável no momento da criação.
Vantagem: Facilita muito ao lidar com tipos complexos (como iteradores de vector).

static (Estática)
Esta é a classe de armazenamento mais "poderosa" que você vai usar. Ela muda o ciclo de vida da variável.
Variável Local Comum: É criada quando a função começa e destruída quando a função termina.
Variável static: É criada uma única vez quando o programa começa e só morre quando o programa fecha. Ela preserva seu valor entre as chamadas da função.


register (Registrador)
Esta classe é um pedido histórico ao compilador para colocar a variável no Registrador da CPU (o lugar mais rápido do computador) em vez de na memória RAM.
Realidade Atual: Os compiladores modernos são mais inteligentes que nós e decidem sozinhos o que vai para o registrador.
Uso: Praticamente caiu em desuso (obsoleta), mas você ainda pode encontrá-la em códigos muito antigos de sistemas de baixo nível.

extern (Externa)
Esta é fundamental para projetos grandes com vários arquivos .cpp. Ela diz ao compilador: "Esta variável existe, mas ela está definida em outro arquivo. Procure por ela lá".
*/


#include<iostream> 
#include<vector>

using namespace std;


// função para uso do static

void somador(){
    //auto i{0}; // desse jeito toda vez que eu chama a função somador, ele imprimir 1
    static auto i{0}; // Agora aqui mudar o cenario, pois toda vez que eu chama, ele vai somar, pq o static vai usar o mesmo espaço de memoria para salva o valor de i
    i++;
    cout << i << endl;
}
int main(){

    // usando o auto, vamso declarar uma variavél e com o auto ela pode ser de qualquer tipo. isso o compilador vai decidir
    // Para usar o auto precisa inicializar a variavél quando for criada.
    // ele não faz a var ser dinamica
  //  auto var{5}; // será um int pois recebeu um inteiro

    // sendo assim eu posso fazer o var recebe uma string
    //var = {"oi"}; // não é valido.


   // vector<int>v{10,20,30,40,50};
    // USANDO O REGISTER
    // Quando uso oregister estou pedindo para o sistema armazenar essa variavél num registrador e naõ na memoria ram
    // Porém não é pq eu peir que o sistema vai armazenar.
   // register int cont; 
   // for ( register auto it=v.begin(); it!=v.end(); it++)
   // {
  //      cout << *it << endl;
  //  }
    // geralmente é uando com o iterator

    //static, é um modificador de acesso
    // ele somar  e o valor vai ate 10, agora se tira o static, vai imprimir 1 nas 10
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    return 0;
}