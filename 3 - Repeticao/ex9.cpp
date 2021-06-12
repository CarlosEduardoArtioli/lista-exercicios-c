#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;

    cout << "Informe um valor: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        s += i;
    }

    cout << s << endl;

    return 0;
}