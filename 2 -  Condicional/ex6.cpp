#include <iostream>
using namespace std;

int main()
{
    double m, n1, n2, n3;

    cout << "Informe a 1 nota: ";
    cin >> n1;
    cout << "Informe a 2 nota: ";
    cin >> n2;
    cout << "Informe a 3 nota: ";
    cin >> n3;

    m = (n1 + n2 + n3) / 3;

    if (m >= 8) {
        cout << "Media final: " << m << endl;
        cout << "Conceito: A" << endl;
    } else {
        if (m >= 5 && m < 8) {
            cout << "Media final: " << m << endl;
            cout << "Conceito: B" << endl;
        } else {
            if (m < 5) {
                cout << "Media final: " << m << endl;
                cout << "Conceito: C" << endl;
            }
        }
    }

    return 0;
}