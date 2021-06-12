#include <iostream>
#include <string.h>
using namespace std;

int calculaMedia(double n1, double n2, double n3, string letra) {
    double media;

    if (letra == "A") {
        media = (n1 + n2 + n3) / 3;
    } else if (letra == "P") {
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / (5 + 3 + 2);
    } else {
        cout << "Letra informada invalida" << endl;
    }
    
    return media;
}

int main()
{
    double n1, n2, n3, media;
    string letra;

    cout << "Informe a primeira nota: ";
    cin >> n1;
    cout << "Informe a segunda nota: ";
    cin >> n2;
    cout << "Informe a terceira nota: ";
    cin >> n3;
    cout << "Informe o metodo (A = aritimetica   P = ponderada): ";
    cin >> letra;

    media = calculaMedia(n1, n2, n3, letra);

    cout << "Media: " << media << endl;

    return 0;
}