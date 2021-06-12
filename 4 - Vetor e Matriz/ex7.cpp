#include <iostream>
using namespace std;

int main()
{
    int a[10], s;

    for (int i = 0; i < 10; i++) {
        cout << "Informe o " << i << " valor: ";
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 != 0) {
            s += a[i];
        }
    }

    cout << "Soma dos valores impares: " << s << endl;

    return 0;
}