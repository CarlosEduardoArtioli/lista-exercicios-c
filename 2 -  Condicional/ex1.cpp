#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Informe o 1 numero inteiro: ";
    cin >> n1;
    cout << "Informe o 2 numero inteiro: ";
    cin >> n2;
    cout << "Informe o 3 numero inteiro: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3 && n2 > n3) {
        cout << n3 << n2 << n1 << endl;
    } else {
        if (n1 > n2 && n1 > n3 && n3 > n2) {
            cout << n2 << n3 << n1 << endl;
        } else {
            if (n2 > n1 && n2 > n3 && n1 > n3) {
                cout << n3 << n1 << n2 << endl;
            } else {
                if (n2 > n1 && n2 > n3 && n3 > n1) {
                    cout << n1 << n3 << n2 << endl;
                } else {
                    if (n3 > n1 && n3 > n2 && n2 > n1) {
                        cout << n1 << n2 << n3 << endl;
                    } else {
                        if (n3 > n1 && n3 > n2 && n1 > n2) {
                            cout << n2 << n1 << n3 << endl;
                        } else {
                            cout << "Ha valores iguais" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}