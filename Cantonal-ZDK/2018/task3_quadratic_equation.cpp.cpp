#include <iostream>
#include <cmath>
using namespace std;

main () {
    cout << "Program uzima a,b i c koeficijente kvadratne jednacine i ispisuje rijesenja." << endl;
    double x1, x2, re1 , re2, im1, im2, a, b, c, D;
    cout << "Unesite koeficient a: ";
    cin >> a;
    cout << "Unesite koeficient b: ";
    cin >> b;
    cout << "Unesite koeficient c: ";
    cin >> c;
    D = b*b - 4*a*c;
    if ( D >= 0 ) 
    {
        x1 = ( -b + sqrt ( D ) ) / ( 2 * a );
        x2 = ( -b - sqrt ( D ) ) / ( 2 * a );
        cout << "Za ove ucitane vrijednosti jednacina ima realna rijesenja." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    } else
    {
        re1 = -b / ( 2 * a );
        re2 = -b / ( 2 * a );
        im1 = sqrt ( abs ( D ) ) / ( 2 * a );
        im2 = -sqrt ( abs ( D ) ) / ( 2 * a );
        cout << "Za ove ucitane vrijednosti jednacina ima imaginarna rijesenja." << endl;
        cout << "x1Re = " << re1 << " x1Im = " << im1 << endl;
        cout << "x2Re = " << re2 << " x2Im = " << im2 << endl;
    }
}