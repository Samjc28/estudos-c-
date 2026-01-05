/*O Ranking de Notas" Crie um programa que:
Receba nomes de alunos e suas notas.
Limpe a tela (system) após cada inserção.
No final, remova a menor nota (o primeiro item após ordenar).
Exiba o ranking ordenado da maior para a menor nota.*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;

struct Aluno {
    
    string nome;
    float nota;
};

// função para comparar as notas
bool compararNotas(Aluno a, Aluno b){
    return a.nota > b.nota;
}

void limpaTela() {

    #ifdef _WIN32
        system("cls");
        #else
            system("clear");

    #endif
}

int main() {

    vector<Aluno> listaAlunos;
    int qtd;

    cout << "Quantos alunos deseja cadastrar ? ";
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        limpaTela();
        Aluno temp;
        cout << "--- Cadastro de Aluno ---" << i + 1 << " ---" << endl;
        cout << "Nome: ";
        cin >> temp.nome;
        cout << "Nota: ";
        cin >> temp.nota;

        listaAlunos.push_back(temp);
        
        //1.Ordenar por nota (maior para o menor)
        sort(listaAlunos.begin(), listaAlunos.end(), compararNotas);

        //2.Remover o ultimo colocado (remove quem ta com a nota mais baixa)
        if(!listaAlunos.empty()){
            cout << "\nRemovendo o ultimo colocado: " << listaAlunos.back().nome << endl;
            listaAlunos.pop_back();

        }

        // 3.Exibindo o ranking FInal

        limpaTela();
        cout << "====RANKING FINAL====" << endl;

        for (size_t i = 0; i < listaAlunos.size(); i++)
        {
            cout << i + 1 << " O lugar: " << listaAlunos[i].nome << "- Nota: " << listaAlunos[i].nota << endl;
        }
        

        }
        return 0;
}