#include <iostream>
using namespace std;

int main()
{
    char c[50];
    char caracter;
    int count = 0;

    for (int i = 0; i < 50; i++) {
        cout << "Informe o valor do elemento " << i << " : ";
        cin >> c[i];
    }

    cout << "Informe o valor do elemento que deseja buscar: ";
    cin >> caracter;

    for (int i = 0; i < 50; i++) {
        if (caracter == c[i]) {
            cout << "Elemento encontrado na posicao: " << i << endl;
            count += 1;
        }
    }
    
    if (count == 0) {
        cout << "O programa não conseguiu encontrar nenhum elemento igual ao informado" << endl;
    } 

    return 0;
}