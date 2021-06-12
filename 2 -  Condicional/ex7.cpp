#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string nome, apartamento;
    double consumo, valorTotalDiarias, subtotal, taxaServico, totalGeral, a = 150, b = 100, c = 75, d = 50, diariaEscolhida;
    int diarias;

    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Tipo do apartamento (a, b, c ou d): ";
    cin >> apartamento;
    cout << "Informe o numero de diarias: ";
    cin >> diarias;
    cout << "Informe o consumo interno: ";
    cin >> consumo;

    if (apartamento == "a") {
        diariaEscolhida = a;
        valorTotalDiarias = a * diarias;
    } else {
        if (apartamento == "b") {
            diariaEscolhida = b;
            valorTotalDiarias = b * diarias;
        } else {
            if (apartamento == "c") {
                diariaEscolhida = c;
                valorTotalDiarias = c * diarias;
            } else {
                if (apartamento == "d") {
                    diariaEscolhida = d;
                    valorTotalDiarias = d * diarias;
                }
            }
        }
    }

    subtotal = valorTotalDiarias + consumo;
    taxaServico = subtotal * 0.1;
    totalGeral = subtotal + taxaServico;

    cout << "\nNome hospede: " << nome << endl;
    cout << "Tipo do apartamento: " << apartamento << endl;
    cout << "Numero de diarias: " << diarias << endl;
    cout << "Valor unitario da diaria: " << diariaEscolhida << endl;
    cout << "Valor total das diarias: " << valorTotalDiarias << endl;
    cout << "Consumo interno: " << consumo << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Taxa de servico: " << taxaServico << endl;
    cout << "Total geral: " << totalGeral << endl;

    return 0;
}