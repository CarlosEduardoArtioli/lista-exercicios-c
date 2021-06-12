#include <iostream>
using namespace std;

int main()
{
    double n1, n2;

    cout << "Informe o 1 numero: ";
    cin >> n1;
    cout << "Informe o 2 numero: ";
    cin >> n2;

    if (n1 > n2) {
        cout << n1 << endl;
    } else {
        if (n1 < n2) {
            cout << n2 << endl;
        } else {
            cout << "Os dois numeros sao iguais" << endl;
        }
    }

    return 0;
}