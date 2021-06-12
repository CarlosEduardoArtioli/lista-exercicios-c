#include <iostream>
using namespace std;

void calculaProximoDia(int dia, int mes, int ano) {
    
    dia += 1;

    if (dia == 30 || dia == 31) {
        mes += 1;
        dia = 1;
    }

    if (mes == 13 && dia == 1) {
        ano += 1;
        mes = 1;
    }
    
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
    
    return;
}

int main()
{
    int dia, mes, ano;

    cout << "Informe o dia: ";
    cin >> dia;
    cout << "Informe o mes: ";
    cin >> mes;
    cout << "Informe o ano: ";
    cin >> ano;

    calculaProximoDia(dia, mes, ano);

    return 0;
}