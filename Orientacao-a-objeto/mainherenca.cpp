#include"herenca.h"

int main(){

    Cachorro meucao("Caramelo");

    meucao.comer(); // VEM DE ANIMAL
    meucao.latir(); // VEM DE CACHORRO

    // criando objeto gato
    Gato meugato("jujuba");

    meugato.comer();
    meugato.miar();

    system("pause");
    return 0;

}