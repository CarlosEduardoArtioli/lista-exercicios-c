#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int b[30];
    int c[50];

    for (int i = 0; i < 20; i++)
    {
        cout << "Informe o elemento " << i << " de a: ";
        cin >> a[i];
    }
    for (int i = 0; i < 30; i++)
    {
        cout << "Informe o elemento " << i << " de b: ";
        cin >> b[i];
    }
    for (int i = 0; i < 50; i++)
    {
        if (i < 20) {
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
        cout << "Elemento " << i << " de c: " << c[i] << endl;
    }
    return 0;
}