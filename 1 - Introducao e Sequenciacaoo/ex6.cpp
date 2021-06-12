#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    double nota1, nota2, nota3;
    string nome1, nome2, nome3;
    cout << "Digite o nome e a nota do 1 aluno: ";
    cin >> nome1;
    cin >> nota1;
    cout << "Digite o nome e a nota do 2 aluno: ";
    cin >> nome2;
    cin >> nota2;
    cout << "Digite o nome e a nota do 3 aluno: ";
    cin >> nome3;
    cin >> nota3;

    cout << "\nLista\n";
    cout << "Nome:\t";
    cout << "Nota:\n";
    cout << nome1 << "\t";
    cout << nota1 << "\n";
    cout << nome2 << "\t";
    cout << nota2 << "\n";
    cout << nome3 << "\t";
    cout << nota3 << "\n";

    return 0;
}