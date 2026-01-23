// Aqui vamos definir o que é publico e o que é privado
#ifndef CONTA_H
#define CONTA_H

#include<string>

class ContaBancaria{
    
    private:
        std::string titular;
        double saldo;

    public:
        //metodos publicos para interagir com a classe contabancaria
        ContaBancaria(std::string nome, double saldoInicial);

        //metodos para movimenta o dinherio de forma segura
        void depositar(double valor);
        void sacar(double valor);

        // metedos getter apernas para leitura dos dados protegidos
        double getSaldo();
        std::string getTitular();

};
#endif