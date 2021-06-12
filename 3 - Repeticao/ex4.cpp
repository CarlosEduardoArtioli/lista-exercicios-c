#include <iostream>
using namespace std;

int main()
{
    int n, t;

    cout << "Informe uma numero natural: ";
    cin >> n;

    for (int i = 1; n > t; i++) {
        t = i * (i + 1) * (i + 2);
    }

    if (t == n) {
        cout << n << " e um numero triangular" << endl;
    } else {
        cout << n << " nao e um numero triangular" << endl;
    }

    return 0;
}