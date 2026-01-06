/*Para manipular arquivos, utilizamos a biblioteca padrão <fstream> (file stream), que fornece as ferramentas necessárias para tratar arquivos como se fossem "fluxos" de dados.*/

/*As Três Classes Principais
Existem três classes fundamentais que você usará dependendo do que deseja fazer:
ofstream (Output File Stream): Usada para criar e escrever em arquivos.a informação vai esta saindo do sistema e indo para o arq.
ifstream (Input File Stream): Usada para ler informações de arquivos existentes. aqui sair do arq e entra no sistema/programa.
fstream (File Stream): Uma combinação das duas; pode ler e gravar simultaneamente.*/

// NESSE ARQUIVO VAMOS TRABALHAR COM AS DUUAS CLASSE OFSTREAM E IFSTREAM. 
// FARIA UM ARQUIVO DIFEERNTE PARA O FSTREAM

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //  Iniciando com o ofstream.
    // chamamos a classe, e demos um nome para a variavél o objeto
    ofstream pasta; // tenho um objeto chamado(arquvido do tipo ofstream)

    // aqui vou criando no pasta do pc o arquivo para guarda os dados
    // foi criando um arquivos no sistema com a extensão .txt para guarda texto
    //" é o nome o arquivos vai ter no sistema"
    pasta.open("arquivos.txt", ios::app);
    
    // Para armazenar os texto dentro do arquivo faço como se fosse um cout. porem com o nome do objeto
    // Desse modo como está todo o tetxto que colocado aqui em baixo " " vai substituir o anterior, para que isso não ocorra
    // usamos o paramentro ios::app, isso faz o cursor ir para o final da frase e colocar o texto novo na frente ou na proxima linha
    pasta << "c++ não é dificil, oque é dificil e ser pobre.\n"; // desse modo.

    pasta.close();
    // OBS: NUNCA ESQUECE DE FECHA O ARQUIVO APÓS A OPERAÇÃO PARA QUE A MEMORIA SEJA LIBERADA.

    // Aqui fazremos a leitura do arquivo com a classe ifstream
    // Para isso usamos chamamos a classe e damos um nome a ela.
    // usamos um while para ler linha por linha do arquivo
    // usaremos o getline para mostra na tela.
    ifstream pastaS;
    string linha; // vair receber cada linha para se exibida na tela

    pastaS.open("arquivos.txt"); // vamos o arquvios que criamos a cima.

    // antes de irmos para a leituta do arquivos sempre verificar se o arquivo foi aberto corretamente. usar o if

    if (pastaS.is_open()) // para verificar se o arquivo está aberto.
    {   while (getline(pastaS, linha)) // no getline precisa passa o arquvio que vai se lido e a variavél que receber lihna lida
    {
        cout << linha << endl; // para mostra linha a linha na tela
    }
    pastaS.close();
    } else{ cout << "-- Erro arquivo nao aberto! --" << endl;}

    return 0;
}