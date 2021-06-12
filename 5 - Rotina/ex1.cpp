#include <iostream>
using namespace std;

int somaDivisiveis(int a, int b, int c) {
    int soma = 0, maior = 0, menor = 0;

    if (b > c) {
        maior = b;
        menor = c;
    } else {
        maior = c;
        menor = b;
    }

    while (maior >= menor) {
        if ((maior % a) == 0) {
            soma += maior;
        }
        maior -= 1;
    }
    
    return soma;
}

int main()
{
    int a, b, c, soma;

    cout << "Informe o numero A: ";
    cin >> a;
    cout << "Informe o numero B: ";
    cin >> b;
    cout << "Informe o numero C: ";
    cin >> c;

    soma = somaDivisiveis(a, b, c);

    cout << "Soma: " << soma << endl;

    return 0;
}