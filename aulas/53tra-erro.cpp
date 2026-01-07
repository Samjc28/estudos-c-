 //Nessa aulas vamos ver tratamneto de erros, como fazemos quando um trecho de codigo e passivo de erro,
 // usamos o try catch para criar uma exeção para que op programa não trave ou mostre uma mensagem de erro para o usuario.
 /*Tratamento de exceções (try e catch)
O tratamento de exceções permite capturar e lidar com erros durante a execução, evitando que o programa falhe.
Utiliza três palavras-chave:
try- define o código a ser testado
throw- desencadeia uma exceção
catch- Lida com o erro*/
 
 #include<iostream>
 #include<vector>
 #include<stdexcept>

 using namespace std;

 double divisao(double n1, double n2);

 int main(){

    // Dentro do try será onde construiremos o bloco de codigo passivo de erro
    // cacth será onde vamos tratar o erro 
    vector<int>num(5); // vector de tamanho de 10, o erro será se o usuario colocar que passe o tamanho

    

    try {

        double n1, n2;
        cout << "Informe o valor da para n1: " << endl;
        cin >> n1;
        cout << "Informe o valor da para n2: " << endl;
        cin >> n2;
        double resul = n1 / n2;
        cout << resul << endl;


        // tentendo atrinbuir um valor na posição 11
        //num.at(4) = 15; // a posição 11 vai receber o valor 15
        //num.at(7) = 10; // a posição 11 vai receber o valor 15

        // Mesmo que não vejemos o erro ele existir e foi tratado pelo cacth
        // O que acontece é que o erro é silencioso para o usuário final se você não imprimir nada dentro do catch.
        // não adicione valores em espços que não estão reservados.
     
        //cout << num[4] << endl;
        //cout << num[7] << endl; // ele vai gerar um erro, mais o usuario não ver.
    //} catch(exception& e){ // o bloco cactg precisar de um paramentro vai receber a exerção e uma variavél
      // cout << "Erro capturado: " << e.what() << endl; // como estamos usando esse linha ela imprimir a msg do erro que foi gerado.
    //}

    // tratamento de erro do 0 / 0
    } catch(const char* msg){ // 
       cout << "Erro capturado: " << msg << endl; 
    }
    
    return 0;
 }

 // tem casos onde é necessario gerar um erro, como emxemplo vamos fazer um função para dividir 2 numeros.

 double divisao(double n1, double n2){
    // para que o erro seja passado para o exception usamos o  throw
    if (n2==0)
    {
        throw "Nao e possivel dividir por 0. \n";
    }
    return n1 / n2;
 }