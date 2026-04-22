#include <iostream>
using namespace std;

int main() {
    string nomes[20];
    float precos[20];
    int quantidade = 0;
    int opcao;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Adicionar produtos\n";
        cout << "2. Procurar produto\n";
        cout << "3. Listar produtos\n";
        cout << "0. Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        // validação simples de entrada inválida
        if (cin.fail()) {
            cin.ignore();
            cout << "Entrada invalida! Tente novamente.\n";
            continue;
        }

        switch (opcao) {

        case 1:
            cout << "Quantos produtos (max 20)? ";
            cin >> quantidade;

            if (quantidade < 1 || quantidade > 20) {
                cout << "Quantidade invalida!\n";
                quantidade = 0;
                break;
            }

            cin.ignore();

            for (int i = 0; i < quantidade; i++) {
                cout << "\nProduto " << i + 1 << endl;

                cout << "Nome: ";
                getline(cin, nomes[i]);

                cout << "Preco: ";
                cin >> precos[i];

                cin.ignore();
            }
            break;

        case 2: {
            if (quantidade == 0) {
                cout << "Nenhum produto cadastrado!\n";
                break;
            }

            string busca;
            bool encontrado = false;

            cin.ignore();
            cout << "Nome do produto: ";
            getline(cin, busca);

            for (int i = 0; i < quantidade; i++) {
                if (nomes[i] == busca) {
                    cout << "Preco: " << precos[i] << endl;
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                cout << "Produto nao encontrado.\n";
            }
            break;
        }

        case 3:
            if (quantidade == 0) {
                cout << "Nenhum produto cadastrado!\n";
            } else {
                cout << "\n--- LISTA DE PRODUTOS ---\n";
                for (int i = 0; i < quantidade; i++) {
                    cout << nomes[i] << " - " << precos[i] << " MT" << endl;
                }
            }
            break;

        case 0:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}