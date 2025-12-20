/* Jogo da Forca */
#include <iostream>
#include <cstdlib>
#include <cstring> // Incluído para usar a função strlen

using namespace std;

int main() {
    // Declarando as variáveis
    char palavra_secreta[30], letra[1], palavra_revelada[30];
    int tam, i, chances, acertos;
    bool acerto;

    // Inicializando as variáveis

    int dif_jogo;
    int dificl = 3;
    int medio = 4;
        
    

    acertos = 0;
    tam = 0;
    
    // Início do Jogo

     cout << "Selecione a Dificuldade do jogo.\n " << endl;
     cout << "1 facil, 2 medio, 3 dificil\n"; 
     cin  >> dif_jogo;
        if(dif_jogo == 3)
        {
            chances = dificl;
        } 
        if (dif_jogo == 2)
        {
            chances = medio;
        } else
            chances = 6;
        

    cout << "***********************************" << endl;
    cout << "****BEM VINDO AO JOGO DA FORCA.****" << endl;
    cout << "***********************************" << endl;

    // Recebendo a palavra secreta do usuário
    cout << "Digite a palavra secreta: ";
    cin >> palavra_secreta;
    system("cls"); // ou system("clear") para Linux/macOS
    
    // Obtendo o tamanho da palavra usando strlen
    tam = strlen(palavra_secreta);

    // Inicializando a palavra_revelada com traços
    for (i = 0; i < tam; i++) {
        palavra_revelada[i] = '-';
    }
    // Adicionando o terminador de string para evitar lixo de memória
    palavra_revelada[tam] = '\0';
    
    // Loop principal do jogo
    while ((chances > 0) && (acertos < tam)) {
        acerto = false; // Resetando o acerto para cada rodada
        
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra Secreta: ";
        cout << palavra_revelada << endl;

        cout << "Digite uma letra: ";
        cin >> letra[0];
        
        for (i = 0; i < tam; i++) {
            if (palavra_secreta[i] == letra[0]) {
                acerto = true;
                if (palavra_revelada[i] == '-') { // Só conta se a letra não foi revelada antes
                    palavra_revelada[i] = palavra_secreta[i]; 
                    acertos++;
                }
            }
        }
        
        if (!acerto) {
            chances--;
        }

        system("cls");
    }

    // Exibindo o resultado final do jogo
    cout << "A palavra era: " << palavra_secreta << endl;
    
    if (acertos == tam) {
        cout << "Parabéns! Você ganhou!" << endl;
    } else {
        cout << "Que pena! Você perdeu." << endl;
    }

    return 0;
}