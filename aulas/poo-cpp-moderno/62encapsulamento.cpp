/*O Encapsulamento é um dos conceitos mais importantes da Programação Orientada a Objetos. Ele funciona como uma "blindagem" ou uma "caixa preta" para o seu código.
Em termos simples: encapsular é esconder os detalhes internos de como um objeto funciona e mostrar apenas o que é estritamente necessário para quem o usa.*/

/*O Encapsulamento é um dos conceitos mais importantes da Programação Orientada a Objetos. Ele funciona como uma "blindagem" ou uma "caixa preta" para o seu código.
Em termos simples: encapsular é esconder os detalhes internos de como um objeto funciona e mostrar apenas o que é estritamente necessário para quem o usa.*/


// obs: esse aqui será usado como exercicio conta bancaria
// aqui será a logica do arquivo conta.h

#include<iostream>
#include "conta.h"

using namespace std;

// construtor: iniciala os dados protegidos
ContaBancaria::ContaBancaria(string nome, double saldoInicial){
    titular = nome;
    
    // if para validação simples no nascimento do objeto
    if (saldoInicial >= 0 )
    {
       saldo = saldoInicial;
    } else {
        saldo = 0;
        cout << "Aviso: Saldo inicial Negativo nao permitido. Definido como 0." << endl;
    }
    
}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
            cout << "Deposito de R$ " << valor << " realizado com sucesso." << endl;
    } else {
            cout << "Erro: Valor de deposito deve ser positivo." << endl;
    }
}

void ContaBancaria::sacar(double valor){
    if(valor > 0 && valor <= saldo){
        saldo -= saldo;
        cout << "Saque de RS " << valor << " Realizado com sucesso " << endl;

    } else{
        cout << "Erro: Saldo insulcifiente ou valor invalido. " << endl;
    }
}

double ContaBancaria::getSaldo(){
    return saldo;
}

string ContaBancaria:: getTitular(){
    return titular;
}
