#include <iostream>
using namespace std;

int main()
{
    double f = 1.5, c = 1.1;
    int i;

    for (i = 0; f > c; i++) {
        f += 0.02;
        c += 0.03;
    }

    cout << "Anos: " << i << endl;

    return 0;
}