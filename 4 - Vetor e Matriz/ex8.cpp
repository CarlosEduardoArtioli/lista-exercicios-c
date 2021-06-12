#include <iostream>
using namespace std;

int main()
{
    int c[100], m, s, i;

    for (int i = 0; i < 100; i++) {
        cout << "Informe o " << i << " valor: ";
        cin >> c[i];
        m += c[i];
    }

    m /= 100;

    for (int i = 0; i < 100; i++) {
        if (c[i] > m) {
            s += 1;
        } else {
            i += 1;
        }
    }

    cout << "Quantidade de numeros superiores a media: " << s << endl;
    cout << "Quantidade de numeros inferiores a media: " << i << endl;

    return 0;
}