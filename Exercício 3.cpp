#include <iostream>
using namespace std;

string nomes[15];
float medias[15];
int totalAlunos = 0;

void adicionarAlunos() {
    int n;

    if (totalAlunos == 15) {
        cout << "Limite de 15 alunos atingido! Nao pode adicionar mais.\n";
        return;
    }

    cout << "Quantos alunos deseja adicionar: ";
    cin >> n;

    if (n + totalAlunos > 15) {
        cout << "Nao pode adicionar tantos alunos. Espaco restante: "
             << (15 - totalAlunos) << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Nome do aluno: ";
        getline(cin, nomes[totalAlunos]);

        cout << "Media do aluno: ";
        cin >> medias[totalAlunos];
        if(medias[totalAlunos]>20){
            cout << "Meidia invalida\n"<<endl;
            continue;
        }

        totalAlunos++;
    }
}

void listarAprovados() {
    int aprovados = 0;

    cout << "\nAlunos aprovados: \n";

    for (int i = 0; i < totalAlunos; i++) {
        if (medias[i] >= 10) {
            cout <<"\nNome: "<<nomes[i] <<endl;
            cout <<"Media: "<<medias[i] << endl;
            aprovados++;
        }
    }

    if (totalAlunos > 0) {
        float percentagem = (aprovados * 100.0) / totalAlunos;
        cout << "\nPercentagem de aprovacao: " << percentagem << "%\n";
    } else {
        cout << "Nenhum aluno cadastrado.\n";
    }
}

int main() {
    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Adicionar aluno\n";
        cout << "2. Listar aprovados\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            cin.ignore();
            adicionarAlunos();
            continue;
        }
        else if (opcao == 2) {
            listarAprovados();
            continue;
        }

    } while (opcao != 0);

    return 0;

}