#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double peso, altura, massa;

    cout << "Informe o peso: ";
    cin >> peso;
    cout << "Informe a altura: ";
    cin >> altura;

    massa = peso / pow(altura, 2);

    if (massa < 26) {
        cout << "Grau de obesidade: Normal" << endl;
    } else {
        if (massa >= 26 && massa < 30) {
            cout << "Grau de obesidade: Obeso" << endl;
        } else {
            if (massa >= 30) {
                cout << "Grau de obesidade: Obeso mórbido" << endl;
            }
        }
    }

    return 0;
}