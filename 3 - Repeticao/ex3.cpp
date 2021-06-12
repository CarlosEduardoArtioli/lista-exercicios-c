#include <iostream>
using namespace std;

int main()
{

    int soma;

    for (int i = 1; i <= 500; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
            soma += i;
        }
    }

    cout << "Soma: " << soma;

    return 0;
}