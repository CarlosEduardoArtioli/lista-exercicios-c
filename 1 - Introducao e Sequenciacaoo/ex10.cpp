#include <iostream>
using namespace std;

int main()
{
    double l, a, f;

    cout << "Lista\n";
    cout << "Nome:\t";
    cout << "Preco:\n";
    cout << "Leite\t";
    cout << "3.49\n";
    cout << "Arroz\t";
    cout << "25.59\n";
    cout << "Feijao\t";
    cout << "10.99\n\n";

    cout << "Quantidade de Leite: ";
    cin >> l;
    cout << "Quantidade de Arroz: ";
    cin >> a;
    cout << "Quantidade de Feijao: ";
    cin >> f;

    cout << "\nLista\n";
    cout << "Nome:\t";
    cout << "Qtde:\t";
    cout << "Preco uni:\t";
    cout << "Subtotal:\n";
    cout << "Leite" << "\t";
    cout << l << "\t";
    cout << "3.49" << "\t\t";
    cout << l * 3.49 << "\n";
    cout << "Arroz" << "\t";
    cout << a << "\t";
    cout << "25.59" << "\t\t";
    cout << a * 25.59 << "\n";
    cout << "Feijao" << "\t";
    cout << f << "\t";
    cout << "10.99" << "\t\t";
    cout << f * 10.99 << "\n";

    return 0;
}