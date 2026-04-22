#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    float temperaturas[7];
    float soma = 0;
    float maior;
    int diaMaior = 0;
    string dia[8]={"segunda-feira","terca-feira","quarta-feira","quinta-feira","sexta-feira"," sabado","domingo"};

    for (int i = 0; i < 7; i++) {
        cout << "Digite a temperatura " << dia[i] << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    // Inicializa com o primeiro valor
    maior = temperaturas[0];

    // Encontrar maior temperatura e o dia
    for (int i = 1; i < 7; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
            diaMaior = i;
        }
    }

    // Cálculo da média
    float media = soma / 7;

    // Saída de dados
    cout << fixed << setprecision(2);
    cout << "\nMedia semanal: " << media << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Ocorreu no dia: " << dia[diaMaior] << endl;

    return 0;
}