#include <iostream>
using namespace std;

int main() {
    string nomes[8];
    float tempos[8];

    // Leitura com validação
    for (int i = 0; i < 8; i++) {
        cout << "Nome do atleta " << i + 1 << ": ";
        cin >> nomes[i];

        do {
            cout << "Tempo (segundos): ";
            cin >> tempos[i];

            if (tempos[i] < 0) {
                cout << "Erro: tempo invalido! Digite um valor positivo.\n";
            }

        } while (tempos[i] < 0);
    }

    // Ordenação (mais rápido → mais lento)
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (tempos[i] > tempos[j]) {

                float temp = tempos[i];
                tempos[i] = tempos[j];
                tempos[j] = temp;

                string tempNome = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = tempNome;
            }
        }
    }

    // Mostrar resultado
    cout << "\nClassificacao final:\n";

    for (int i = 0; i < 8; i++) {
        cout << nomes[i] << " - " << tempos[i] << "s\n";
    }

    return 0;
}