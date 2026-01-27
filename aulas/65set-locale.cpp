/*Aqui vamos aprender como configurar para podemos usar acentuação no c++ */

#include<iostream>
#include <windows.h> // Biblioteca específica para Windows
//#include<locale.h> não vamos usar-lá 


using namespace std;

int main(){
    // com essa funçõa posso escrever os textos em portugues brasil
   // setlocale(LC_ALL, "portuguese");


    // Configura a saída do terminal para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    // Configura a entrada do terminal para UTF-8 (útil para cin)
    SetConsoleCP(CP_UTF8);

    cout << "escrevendo acentuação: maçã, chápeu, pão ";
    return 0;
}