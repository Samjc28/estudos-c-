/*O que é struct (Estrutura) em C++?
A palavra-chave struct (abreviação de structure) em C++ permite agrupar um conjunto de variáveis de diferentes tipos de dados sob um único nome. Ela cria um novo tipo de dado definido pelo usuário.
Pense em um struct como uma ficha ou um registro. Em vez de lidar com várias variáveis soltas (nomeAluno, idadeAluno, notaAluno), você cria uma única estrutura Aluno que contém todas essas informações.*/
/*struct é geralmente usada para agrupar apenas dados, sem muitos métodos complexos*/
/*Cada variável na estrutura é conhecida como um membro da estrutura. Ao contrário de uma matriz , uma estrutura pode conter muitos tipos de dados diferentes: int, string, bool, etc.*/
/*Para acessar membros de uma estrutura, use a sintaxe de ponto (.)*/
/*Você pode usar uma vírgula ( ,) para usar uma estrutura em muitas variáveis:
struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; varias struct do que tem esses dados, com nome != que posso usar mais para frente no codigo.*/


#include<iostream>
#include<string>

using namespace std;

// declarando a mninha strcut
// posso colcar o nome logo após a palavra-chave ou depois da ultima } carro; veremos  ex: de ambos os casos
// agora tenho uma variavél do tipo struct que armazena esses valores
struct Carros {
    string montadora; // poderia declarar os valores aqui, mas vou fazer dentro da função main
    string modelo;
    string motor;
    int ano;
    
};

int main() {

    // fazendo a inserção de valores na struct
    Carros carro1;  // estou declaramdo uma variavél carro1 do tipo Carro(que é minha struct)

    // acessando os mebros da struct, é adicionado valores a eles.
    carro1.montadora = "BMW"; 
    carro1.modelo = "Suv iX";
    carro1.motor = "Eletrico";
    carro1.ano = 2025;

    // Pronto agora toda vez que eu precisa usar algum desses dados posso cham-los
    // Exibindo os valores na tela
    cout << "1 opcao de Veiculo\n" << endl;
    cout << "Montadora do Veiculo......: " << carro1.montadora << endl;
    cout << "Modelo do veiculo.........: " << carro1.modelo << endl;
    cout << "Tipo de motor.............: " << carro1.motor << endl;
    cout << "Ano de fabricacao..........: " << carro1.ano << endl;

    // casso eu queria criar outro carro posso usar o mesmo modelo com nome diferente
    Carros carro2;

    // Dados do 2° Carro 
    carro2.montadora = "Ferrari"; 
    carro2.modelo = "F80";
    carro2.motor = "V6- 120 - Carter Seco";
    carro2.ano = 2024;

    string opcao;
    cout << "\nDeseja Ver a 2 opcao de Veiculo? [Sim/Nao] " << endl;
    cin >> opcao;

    if (opcao == "sim")
    {
        cout << "2 opcao de Veiculo\n" << endl;
        cout << "Montadora do Veiculo......: " << carro2.montadora << endl;
        cout << "Modelo do veiculo.........: " << carro2.modelo << endl;
        cout << "Tipo de motor.............: " << carro2.motor << endl;
        cout << "Ano de fabricacao.........: " << carro2.ano << endl;
    } else

    
    return 0;
}