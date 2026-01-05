/*O que é a Sobrecarga de Funções?
A sobrecarga de funções (ou Function Overloading) é uma das funcionalidades mais poderosas do C++ que permite que você crie múltiplas funções com o mesmo nome, mas que executam tarefas ligeiramente diferentes.
A "mágica" por trás disso é que o compilador de C++ consegue diferenciar qual função chamar baseando-se no tipo e no número dos argumentos que você passa para ela.
Imagine que você quer criar uma função para calcular a área de diferentes formas geométricas. Em vez de ter três nomes diferentes como calcularAreaQuadrado, calcularAreaRetangulo e calcularAreaCirculo, você pode ter apenas uma função calcularArea sobrecarregada para cada caso 
*/

#include <iostream>

using namespace std;

// 1. Sobrecarga para o Quadrado (recebe um argumento)
double calcularArea(double lado);


// 2. Sobrecarga para o Retangulo (recebe dois argumentos)
double calcularArea(double largura, double altura);

// 3. Sobrecarga para o Circulo (recebe um argumento, mas de tipo diferente)
double calcularArea(int raio);


// função principal
int main() {
    // Chamada para a funcao do Retangulo (dois argumentos)
    cout << "Area do retangulo: " << calcularArea(5.0, 10.0) << endl;

    // Chamada para a funcao do Quadrado (um argumento tipo double)
    cout << "Area do quadrado: " << calcularArea(7.0) << endl;
    
    // Chamada para a funcao do Circulo (um argumento tipo int)
    cout << "Area do circulo: " << calcularArea(5) << endl;

    return 0;
}

double calcularArea(double lado) {
    cout << "Calculando a area do quadrado..." << endl;
    return lado * lado;
}

double calcularArea(double largura, double altura) {
    cout << "Calculando a area do retangulo..." << endl;
    return largura * altura;
}

double calcularArea(int raio) {
    cout << "Calculando a area do circulo..." << endl;
    return 3.14159 * raio * raio;
}
