#include <iostream>
#include <string.h>
using namespace std;

void nomeCompleto(string nome, string sobrenome) {
    
    cout << nome << " " << sobrenome << endl;

    return;
}

int main()
{
    string nome, sobrenome;

    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o sobrenome: ";
    cin >> sobrenome;

    nomeCompleto(nome, sobrenome);

    return 0;
}