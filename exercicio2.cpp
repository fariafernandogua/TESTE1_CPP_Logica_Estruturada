#include <iostream>
using namespace std;

// Função para pesquisar
void pesquisar(int cod[], int qtd[], int tamanho, int procura) {
    int i;
    int encontrou = 0;

    for (i = 0; i < tamanho; i++) {
        if (cod[i] == procura) {
            cout << "Produto encontrado\n";
            cout << "Quantidade: " << qtd[i] << endl;

            if (qtd[i] < 5) {
                cout << "Stock Critico\n";
            }

            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        cout << "Produto nao encontrado\n";
    }
}

int main() {
    int codigos[10] = {1,2,3,4,5,6,7,8,9,10};
    int stock[10] = {10,3,8,2,6,1,15,4,9,67};

    int codigo;

    cout << "Digite o codigo: ";
    cin >> codigo;

    pesquisar(codigos, stock, 10, codigo);

    return 0;
}