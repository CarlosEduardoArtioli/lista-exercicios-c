#include <iostream>
using namespace std;

int main()
{
    char c[30];

    for (int i = 0; i < 30; i++) {
        cout << "Informe o valor do elemento " << i << " : ";
        cin >> c[i];
    }

    for (int i = 0; i < 30; i++) {
        if ('a' == c[i] || 'e' == c[i] || 'i' == c[i] || 'o' == c[i] || 'u' == c[i]) {
            c[i] = '@';
        }
    }

    cout << endl;

    for (int i = 0; i < 30; i++) {
        cout << c[i] << endl;
    }

    return 0;
}