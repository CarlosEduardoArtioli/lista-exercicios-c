#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[5];

    for (int i = 0; i < 5; i++) {
        cout << "Informe o " << i << " valor de a: ";
        cin >> a[i];
        cout << "Informe o " << i << " valor de b: ";
        cin >> b[i];
    }

    for (int i = 0; i < 5; i++) {
        c[i] = a[i] * b[i];
    }

    cout << endl;
    cout << "Matriz A" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Matriz B" << endl;
    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    cout << "Matriz C" << endl;
    for (int i = 0; i < 5; i++) {
        cout << c[i] << " ";
    }

    cout << endl;

    return 0;
}