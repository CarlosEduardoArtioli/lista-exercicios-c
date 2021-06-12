#include <iostream>
using namespace std;

int main()
{
    double a, b, h;

    cout << "Informe a base do triangulo: ";
    cin >> b;
    cout << "Informe a altura do triangulo: ";
    cin >> h;

    a = (b * h) / 2;

    cout << "A area do triangulo e de: " << a << endl;

    return 0;
}