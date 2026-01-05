/*Crie um programa que peça ao usuário para digitar números inteiros até que ele digite o número 0. Depois que ele digitar 0, o programa deve:
Mostrar o primeiro e o último número digitado (sem contar o zero).
Mostrar a soma de todos os números que estão dentro do vector.*/

/*Duas funções novas que usei e você deve conhecer:
.empty(): Retorna true se o vector estiver vazio. É sempre bom checar antes de tentar acessar o primeiro ou último item para o programa não "crashar".

.front() e .back(): São atalhos muito práticos. O front() te dá o primeiro elemento e o back() o último, sem você precisar calcular o índice na mão.*/

#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> numeros;
    int entrada;

    cout << "Digites numeros inteiros (digite 0 para sair): " << endl;

    while (true)
    {
        cin >> entrada;
        if(entrada == 0){
            break; // aqui se o usuario digita zero, sair do programa
        }

        numeros.push_back(entrada);

    }

        // Verificando se o vector não está vazio para evitar erros

        if (!numeros.empty())
        {
            int soma = 0;

            for (int n : numeros)
            {
                soma += n; // Para acumula a soma
            }

            cout << "\n--Resultado--" << endl;
            cout << "Primeiro numero: " << numeros.front() << endl;
            cout << "Ultimo numero: " << numeros.back() << endl;
            cout << "Soma total: " << soma << endl;
            cout << "Quantidade de numeros: " << numeros.size() << endl;
            
        } else {
        cout << "Nenhum numeros foi digitado: " << std::endl;
    }
        
    
    return 0;
}