#include <iostream>
using namespace std;

int main()
{
    double mf, mp, mt, me;

    cout << "Informe a media de provas: ";
    cin >> mp;
    cout << "Informe a media de trabalhos: ";
    cin >> mt;
    cout << "Informe a media de exercicios: ";
    cin >> me;

    mf = (0.7 * mp) + (0.2 * mt) + (0.1 * me);

    cout << "Media final: " << mf << endl;
    
    return 0;
}