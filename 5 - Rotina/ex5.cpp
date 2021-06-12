#include <iostream>
#include <math.h>
using namespace std;

void calculaElevado(int x, int y) {
    
    cout << "x^y: " << pow(x, y) << endl;
    
    return;
}

int main()
{
    int x, y;

    cout << "Informe o x: ";
    cin >> x;
    cout << "Informe o y: ";
    cin >> y;

    calculaElevado(x, y);

    return 0;
}