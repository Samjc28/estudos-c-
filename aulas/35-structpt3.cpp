
/*Para a aula 35 vou usar o mesmo codigo da 34 porém vou fazer as devidas mundaças 
Nessa aulas vamos associar struct com veotres*/
/*Vamos mudqar apernas o main, não vamos mexe na struct*/



#include<iostream>
#include<string>

using namespace std;

struct Carros {
    string montadora;
    string modelo;
    string motor;
    int ano;
    
   
    void insere(string stmontadora, string stmodelo, string stmotor, int stano){
       montadora = stmontadora;
       modelo = stmodelo;
       motor = stmotor;
       ano = stano;
    }

  
    void exibir(){
    cout << "\nMontadora do Veiculo......: " <<  montadora << endl;
    cout << "Modelo do veiculo.........: " <<  modelo << endl;
    cout << "Tipo de motor.............: " <<  motor << endl;
    cout << "Ano de fabricacao..........: " << ano << endl;
    }
};

int main() {

    // dentro da main vou declara um array que vai ser um ponteiro, toda vez que for mexe com struct e array, usamos ponteiros.
    // criamos um array(ponteiro) do tipo Carro(struct) e vai armazenar 5 elementos
    Carros *carros = new Carros[5];
    Carros car1, car2, car3, car4, car5; // aqui estou criando os carros

    // agora vamos adicionar os carros ao vetor(array), cada carro vai receber uma posição dentro do array

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;
    
    // atribuindooso valores
    carros[0].insere("BMW", "Ix", "Eletrico", 2024);
    carros[1].insere("Ford", "IxP", "Eletrico", 2023);
    carros[2].insere("Audi", "IxA", "Eletrico", 2022);
    carros[3].insere("Pagani", "IxX", "Eletrico", 2021);
    carros[4].insere("Mclaren", "IxZ", "Eletrico", 2020);

    // agora vamos criar um laço para mostrar esse valores 

    for ( int i = 0; i < 5; i++)
    {
        carros[i].exibir();
    }
    



   


    
    return 0;
}