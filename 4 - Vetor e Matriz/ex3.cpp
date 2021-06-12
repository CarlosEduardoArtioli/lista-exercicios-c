#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[20];
    int s = 0;
    int count = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Informe o valor do elemento " << i << " : ";
        cin >> a[i];
    }

    for (int i = 19; i >= 0; i--) {
        s += pow(a[count] - a[i], 2);
        count += 1;
    }
    cout << "S: " << s << endl;

    return 0;
}