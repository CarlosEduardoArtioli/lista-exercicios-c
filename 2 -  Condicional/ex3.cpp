#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string codigo;
    double precoKwh, qtdeKwh, total;

    cout << "Informe o codigo do consumidor: ";
    cin >> codigo;
    cout << "Informe o preco do Kwh: ";
    cin >> precoKwh;
    cout << "Informe a quantidade de Kwh: ";
    cin >> qtdeKwh;

    total = precoKwh * qtdeKwh;

    cout << "\nCodigo consumidor: " << codigo << endl;

    if (total > 11.2) {
        cout << "Total a pagar: " << total << endl;
    } else {
        total = 11.2;
        cout << "Total a pagar: " << total << endl;
    }

    return 0;
}