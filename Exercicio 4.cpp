#include <iostream>
#include <iomanip>
using namespace std;

const int TAM = 5;

// Ler dados
void lerDados(string nome[], float preco[], int quantidade[]) {
    for (int i = 0; i < TAM; i++) {
        cout << "\nItem " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, nome[i]);
        cout << "Preco unitario: ";
        cin >> preco[i];
        cout << "Quantidade: ";
        cin >> quantidade[i];
        cin.ignore();
    }
}

// Calcular e mostrar fatura
void calcularFatura(string nome[], float preco[], int quantidade[]) {
    float total = 0;

    cout << fixed << setprecision(2);
    cout << "\n--- Fatura ---\n";

    for (int i = 0; i < TAM; i++) {
        float subtotal = preco[i] * quantidade[i];
        total += subtotal;

        cout << nome[i] << " | Subtotal: " << subtotal << " MT" << endl;
    }

    // Aplicar desconto
    if (total > 1000) {
        float desconto = total * 0.10;
        total -= desconto;
        cout << "\nDesconto aplicado: " << desconto << " MT" << endl;
    }

    cout << "Total a pagar: " << total << " MT" << endl;
}

int main() {
    string nome_item[TAM];
    float preco_unitario[TAM];
    int quantidade_comprada[TAM];

    lerDados(nome_item, preco_unitario, quantidade_comprada);
    calcularFatura(nome_item, preco_unitario, quantidade_comprada);

    return 0;
}