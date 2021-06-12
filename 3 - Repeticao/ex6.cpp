#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long s = 1, x;

    cout << "Informe um valor: ";
    cin >> x;

    for (int i = 1; i <= 15; i++) {
        s = s + ((pow(x, (i + 1))) / i);
        cout << s << endl;
    }

    cout << s << endl;

    return 0;
}