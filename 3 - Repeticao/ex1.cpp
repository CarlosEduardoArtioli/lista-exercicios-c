#include <iostream>
using namespace std;

int main()
{
    double x, s;

    cout << "Informe o valor de X: ";
    cin >> x;

    for (int i = 1; i <= 20; i++) {
        s += x/i;
    }

    cout << s << endl;

    return 0;
}