/*
o Iterator (Iterador). Se o std::vector é uma gaveta e os métodos são as ações, o Iterator é o seu dedo indicador.
O Iterador é um objeto que "aponta" para um elemento dentro de um container (como o vector) e permite que você navegue por ele. No vídeo do Professor Bruno, você viu ele usando begin() e end() — esses são os pontos de partida do seu "dedo indicador".
*/

/*Um iterador funciona de forma muito parecida com um ponteiro. Ele sabe onde um item está e como pular para o próximo.
Os dois comandos principais que você sempre verá são:
.begin(): Aponta para o primeiro elemento do vector.
.end(): Aponta para a posição após o último elemento (é o sinal de "parar").*/

/*std::next(it, n): Retorna um novo iterador que aponta para n posições à frente do iterador atual. Ele não altera o iterador original.
std::prev(it, n): É o oposto do next. Retorna um novo iterador que aponta para n posições atrás. Muito útil para acessar o penúltimo elemento, por exemplo.
std::advance(it, n): Esta é diferente. Ela modifica o iterador original, "empurrando" ele n posições para frente ou para trás. Ela não retorna nada (void).*/

#include<iostream>
#include<vector>
#include<string>
#include<iterator> // Necessario para usar o next, prev e advance

using namespace std;

int main(){

    // vou criar um vector e inicializar
    vector<string> carros = {"Fusca", "Ford Fusion", "Opala", "Maverick", "Toyota Supra MK4"};

    // criando o interator no inicio
    auto it = carros.begin(); // o auto para o compilador dizer o o tipo ele mesmo vai descobrir
    cout << "Inicio " << *it << endl; // o it precisa ser passado como um ponteiro


    // usando o end
    it = carros.end()-1; // o -1 para evitar de retorna um valor maior o do vector


    // usando um netx para ver o proximo valor sem move o it
    /* Ele cria uma cópia do seu iterador it, caminha 2 posições para a frente e salva em proximo.
    Resultado: proximo aponta para "Chevette".
    Importante: O seu it original não se mexeu; ele continua apontando para "Fusca".
    É como olhar pelo binóculo sem sair do lugar.*/
    auto proximo = next(it, 2);
    cout << "Duas posições a frente (usando next): " << *proximo << endl; // Saída: Chevette
    cout << "Iterador original continua no: " << *it << endl;

    // usando o advance para move o it de verdade
    /*Diferente do next, o advance empurra o iterador original. Resultado:
    it agora deixa de apontar para "Fusca" e passa a apontar para "Maverick" (3 posições à frente).
    Por que usar: Use quando você realmente quer mudar a posição atual da sua "ponteira" de navegação.*/
    advance(it, 3);
    cout << "Iterador original agora moveu para: " << *it << endl; // Saída: Maverick

    //Usando prev para voltar
    //Funciona igual ao next, mas para trás.
    //Resultado: Como it estava no "Maverick", o prev nos mostra quem vem antes: "Chevette".
    auto anterior = prev(it, 1);
    cout << "Uma posição atrás do Maverick (usando prev): " << *anterior << endl; // Saída: Chevette

    // 5. Exemplo prático: remover o penúltimo elemento
    // O end() aponta para DEPOIS do último, então recuamos 2 posições
    /*O carros.end() não aponta para o último item ("Toyota Supra MK4"). Ele aponta para um espaço vazio depois do último.
    Se eu recuar 1 posição (prev(end, 1)), chego no "Toyota Supra MK4" (o último).
    Se eu recuar 2 posições (prev(end, 2)), chego no "Maverick" (o penúltimo).*/
    auto penultimo = prev(carros.end(), 2);
    cout << "\nRemovendo o penúltimo: " << *penultimo << endl;
    carros.erase(penultimo); 
    /*O método .erase() do vector exige um iterador. Como já posicionamos o iterador penultimo exatamente onde queríamos, a remoção é cirúrgica.*/

    cout << "\nLista final de carros:" << endl;
    for(const auto& c : carros) {
        cout << "- " << c << endl;
    }

    return 0;
}
