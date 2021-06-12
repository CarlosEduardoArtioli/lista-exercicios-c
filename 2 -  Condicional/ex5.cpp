#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string nome;
    double salarioAtual, salarioAjustado;

    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o salario atual: ";
    cin >> salarioAtual;

    salarioAjustado += salarioAtual * 0.2; 

    if (salarioAtual >= 0 && salarioAtual <= 1000) {
        salarioAjustado = salarioAtual + (salarioAtual * 0.2);
    } else {
        if (salarioAtual >= 1000.01 && salarioAtual <= 5000) {
            salarioAjustado = salarioAtual + (salarioAtual * 0.1);
        } else {
            if (salarioAtual > 5000) {
                salarioAjustado = salarioAtual + (salarioAtual * 0.0);
            } else {
                cout << "Valor invalido" << endl;
            }
        }
    }

    cout << "\nNome: " << nome << endl;
    cout << "Salario atual: " << salarioAtual << endl;
    cout << "Salario ajustado: " << salarioAjustado << endl;

    return 0;
}