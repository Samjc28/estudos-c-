#include<iostream>
#include "conta.h"

using namespace std;


int main(){

    ContaBancaria minhaConta( "Seu nome" , 1000.0);

    // TENTATIVA DE ACESSO DIRETO (Isso daria ERRO de compilação)
    // minhaConta.saldo = 5000000; // O compilador impede isso!

    // FORMA CORRETA E SEGURA:
    minhaConta.depositar(500.0);
    minhaConta.sacar(200.0);

    cout << "Titular: " << minhaConta.getTitular() << endl;
    cout << "Saldo atual: " << minhaConta.getSaldo() << endl;

   // Tentativa de fraude (o encapsulamento bloqueia através da lógica no .cpp)
    minhaConta.sacar(2000.0); 
    

    
    return 0;
}