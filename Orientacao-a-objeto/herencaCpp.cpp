/*A herança é um dos pilares da programação orientada a objetos que permite criar novas classes baseadas em classes existentes, promovendo a reutilização de código e estabelecendo relações hierárquicas entre classes.*/

/*O Operador :: Ele significa "pertence a". Animal::comer() diz: "esta é a função comer que pertence à classe Animal".
Para herdar de uma classe, use o :
O Arquivo .h: Você nunca compila o arquivo .h diretamente. Você compila os arquivos .cpp.
Compilação: Se estiver usando o terminal (GCC), você deve compilar os dois .cpp juntos: g++ main.cpp Animais.cpp -o programa
Por que fazer isso? Se você tiver 100 classes e mudar apenas o código dentro de Animais.cpp, o compilador só precisa reprocessar esse arquivo, o que economiza tempo em projetos grandes.*/

/*O Conceito de "Proteção" (Acesso)
Quando você herda, existem regras sobre o que você pode mexer:
Público (Public): Coisas que qualquer um vê (seu sobrenome).
Privado (Private): Coisas que só o pai sabe e não conta nem para os filhos (a senha do banco do pai).
Protegido (Protected): Segredos de família. Só o pai e os filhos sabem, mas os vizinhos (o resto do programa) não.*/


#include"herenca.h"

//  /mplementação do Animal

Animal::Animal(std::string n) : nome(n){}

void Animal::comer() {
    std::cout << nome << " esta comendo..." << std::endl;
}

// implementação do cachorro
Cachorro::Cachorro(std::string n) : Animal(n) {
    // Pode deixar vazio ou adicionar algo específico aqui
}
// o construtor do filho chama o do pai aqui também
void Cachorro::latir(){
    std::cout << nome << " diz: AU AU! " << std::endl; 
}
    
