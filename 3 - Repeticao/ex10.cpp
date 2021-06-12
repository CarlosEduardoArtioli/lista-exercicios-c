#include <iostream>
using namespace std;

int main()
{
    int a = 0 , b = 1, n, seq = 0;

    cout << "Digite um numero maior ou igual a 2: ";
    cin >> n;
    cout << "1" << endl;

      for (int i = 0; i < n; i++) {
        seq = (a + b);
        cout << seq << endl;
        a = b;
        b = seq;
      }

    return 0;
}