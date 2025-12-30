/*A diretiva #ifndef (if not defined) em C/C++ serve para evitar que um arquivo de cabeçalho seja incluído múltiplas vezes no mesmo programa, prevenindo erros de redefinição de classes, funções ou variáveis, ao verificar se uma macro (um nome) já foi definida antes de incluir seu conteúdo. Ela funciona com #define e #endif, criando um "guarda-cabeçalho" que garante que o código entre eles só seja processado uma vez. */

/*Construtores
Um construtor é um método especial que é chamado automaticamente quando um objeto de uma classe é criado.
Para criar um construtor, use o mesmo nome da classe, seguido de parênteses ():
*/

/*Regras do Construtor
O construtor tem o mesmo nome que a classe .
Não possui tipo de retorno (nem mesmo void).
Geralmente é declarado público .
É chamado automaticamente quando um objeto é criado.*/

//Em headers, use sempre std::string.
//Evite using namespace std; em arquivos .h (polui o namespace de quem inclui). Escreva o tipo completo:

//using namespace std; não é recomendado usar em arquivos .h especialmente em programas grandes.

#ifndef POO_GET_SET_H_INCLUDED 
#define POO_GET_SET_H_INCLUDED
#include<iostream>
#include <string>  

// Para eu possa altera os valores privados devmos usar o metedo get, set.

class veiculo{
    public:
        float valor;
        int tipo; 
        // vou criar um construto de mesmo nome da classe
        veiculo(int tp);

        // aqui vou criar um metedo para altera algum valor dos pribados.
        int getvelmax(); // declarado o prototipo

        // usando o set para definir a velmax
        void setvelmax(int vmx);

    private: 
    // As propriedade privadas eu só vou ter acesso, elas só podem ser manipuladas pela classe
         int chassi;
         int velmax;
         //std::string montadora;
         std::string nome;
         bool estado;
};

// vou fazer o metedo get para obter o velmax e pode altera-la
int veiculo::getvelmax(){
    return velmax;
};

void veiculo::setvelmax(int vmx){
    velmax = vmx;
};

//Agora vamos declarar o metedo construtor
//1° veiculo é a classe e o 2° veiculo e o construto
veiculo::veiculo(int tp){
  std::cout << "Informe o tipo do veiculo: [1 = Carrro: 2 = Barco: 3 = Aviao] " << std::endl;
    std::cin >> tp;
    tipo = tp;
    if (tipo == 1 ){
        nome = "Carro";
        setvelmax(200);
        std::cout << "Veiculo escolhecido: " << nome << "-velocidade Max: " << velmax << std::endl; 
    } else   if (tipo == 2 ){
        nome = "Barco";
       setvelmax(80);
        std::cout << "Veiculo escolhecido: " << nome << "-velocidade Max: " << velmax << std::endl; 
    }  if (tipo == 3 ){
        nome = "Aviao";
      setvelmax(880);
        std::cout << "Veiculo escolhecido: " << nome << "-velocidade Max: " << velmax << std::endl; 
    } 
    
}
#endif
