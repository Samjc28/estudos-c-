#ifndef HERENCACPP_H_INCLUDED
#define HERENCACPP_H_INCLUDED
#include<string>
#include<iostream>
// Classe Base
class Animal {
    protected:
        std::string nome;
    
    public:
        Animal(std::string n);
        void comer();
};

// classe filha cachorro
class Cachorro : public Animal{ // aqui estou criando uma nova classe nome-cachorro, que herda todos os elementos da classe animal.
    public:
    Cachorro(std::string n);
    void latir();
};

// criando uma nova classe gato que herda de
class Gato : public Animal{
    public:
        Gato(std::string n); // construtor
        void miar(); // metedo espeficico do gato
};

#endif