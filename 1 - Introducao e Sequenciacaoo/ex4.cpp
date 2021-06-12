#include <iostream>
using namespace std;

int main()
{
    double c, f;

    cout << "Informe a temperatura em Fahrenheit: ";
    cin >> f;

    c = (5/9) * (f - 32);

    cout << "A temperatura em Celsius e de: " << c << endl;

    return 0;
}