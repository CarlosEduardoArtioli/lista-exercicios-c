#include <iostream>
using namespace std;

int main()
{
    double m, n1, n2, n3, p1, p2, p3;

    cout << "Informe a 1 nota: ";
    cin >> n1;
    cout << "Informe o 1 peso: ";
    cin >> p1;
    cout << "Informe a 2 nota: ";
    cin >> n2;
    cout << "Informe o 2 peso: ";
    cin >> p2;
    cout << "Informe a 3 nota: ";
    cin >> n3;
    cout << "Informe o 3 peso: ";
    cin >> p3;

    m = ((n1 * p1) + (n1 * p1) + (n1 * p1)) / (p1+p2+p3);

    cout << "A media ponderada e: " << m << endl;

    return 0;
}