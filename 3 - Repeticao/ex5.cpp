#include <iostream>
using namespace std;

int main()
{
    int n, s = 1, num, f;

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        num = 1 / i;
        f = 1;

        for (int j = num; j > 0; --j) {
            f *= num;
        }

        s += f;
    }

    cout << "S: " << s << endl;

    return 0;
}