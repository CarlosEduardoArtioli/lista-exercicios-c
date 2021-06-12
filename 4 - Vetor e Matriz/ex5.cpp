#include <iostream>
using namespace std;

int main()
{
    double notas[3][10];
    double menor = 10;
    int p1 = 0, p2 = 0, p3 = 0;
    
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Notas da prova " << i+1 << endl;
        for (int j = 0; j < 10; j++) {
            cout << "Nota do aluno " << j+1 << ": ";
            cin >> notas[i][j];
        }
    }

    cout << endl;
    cout << "Relatorio" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            if(notas[j][i] <= menor) {
                menor = notas[j][i];
            }
        }

        cout << "Menor nota do aluno " << i+1 << ": " << menor << endl;
        
        for (int k = 0; k < 3; k++) {
            if(menor == notas[k][i] && k == 0){
                p1++;
                break;
            }
            else if(menor == notas[k][i] && k == 1){
                p2++;
                break;
            }
            else if(menor == notas[k][i] && k == 2){
                p3++;
                break;
            }
        }
    }
    
    cout << endl;
    cout << "Quantidade de alunos com menor nota na prova 1: " << p1 << endl;
    cout << "Quantidade de alunos com menor nota na prova 2: " << p2 << endl;
    cout << "Quantidade de alunos com menor nota na prova 3: " << p3 << endl;

    return 0;
}