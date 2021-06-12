#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[20];
    double b[20];

    for (int i = 0; i < 20; i++) {
        cout << "Informe o elemento " << i << " : ";
        cin >> a[i]; 
    }

    for (int j = 0; j < 20; j++) {
        if (j % 2 == 0) {
            b[j] = pow(a[j], 3); 
        } else {
            b[j] = a[j] / 2;
        }
        cout << "Elemento " << j << " de b: " << b[j] << endl;
    }

    return 0;
}