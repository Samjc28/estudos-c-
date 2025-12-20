/*Para a aula 34 vou usar o mesmo codigo da 33 porém vou fazer as devidas mundaças 
que veremos nessa aula
*/

/*nessa aula veremos como criar metedos para usar dentro da struct*/
//1° metedos que veremos será como fazer para atribuir os valores.
// vamos criar uma função dentro da struct para estamos atribuindo so valores. 


#include<iostream>
#include<string>

using namespace std;

struct Carros {
    string montadora;
    string modelo;
    string motor;
    int ano;
    
    // nossa função é do tipo void pois não vai retorna nada
    // essa função é para inserir os valores para variavál
    void insere(string stmontadora, string stmodelo, string stmotor, int stano){
       montadora = stmontadora;
       modelo = stmodelo;
       motor = stmotor;
       ano = stano;
    }

    // agora vamos criar uam para exibvir esse valores
    void exibir(){
    cout << "Montadora do Veiculo......: " <<  montadora << endl;
    cout << "Modelo do veiculo.........: " <<  modelo << endl;
    cout << "Tipo de motor.............: " <<  motor << endl;
    cout << "Ano de fabricacao..........: " << ano << endl;
    }
};

int main() {

    Carros car;
    // feito as funções posso apagar todo aquele codigo que estava aqui, pois para exibir e inserir valores vou chamas as funções
   // dentro dos () passo os valores que são os arguementos da função, sendo necessario os 4 arg para funcionar
    car.insere("BMW", "Ix", "Eletrico", 2025);

    car.exibir();

   


    
    return 0;
}