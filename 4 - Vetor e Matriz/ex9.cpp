#include <iostream>
using namespace std;

int main()
{
    int d1[5] = {1, 2, 3, 4, 5}, d2[5] = {2, 3, 5, 7, 8}, count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (d1[i] == d2[j]) {
                cout << "O aluno " << d1[i] << " esta matriculado nas duas disciplinas" << endl;
                count += 1;
            }
        }
    }

    if (count == 0) {
        cout << "Nao ha alunos matriculados nas duas disciplinas" << endl;
    }

    return 0;
}