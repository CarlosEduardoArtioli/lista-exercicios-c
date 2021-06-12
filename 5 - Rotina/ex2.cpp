#include <iostream>
using namespace std;

void calcular(int n1, int n2) {

    if (n1 >= n2) {
        double soma, subtracao, divisao, multiplicacao;

        soma = n1 + n2;

        subtracao = n1 - n2;

        divisao = n1 / n2;

        multiplicacao = n1 * n2;

        cout << "Soma: " << soma << endl;
        cout << "Subtracao: " << subtracao << endl;
        cout << "Divisao: " << divisao << endl;
        cout << "Multiplicacao: " << multiplicacao << endl;
    } else {
        cout << "O primeiro numero deve ser maior ou igual ao segundo" << endl;
    }

    return;
}

int main()
{
    double n1, n2;
    char retorno[40];

    cout << "Informe o primeiro numero: ";
    cin >> n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;

    calcular(n1, n2);

    return 0;
}