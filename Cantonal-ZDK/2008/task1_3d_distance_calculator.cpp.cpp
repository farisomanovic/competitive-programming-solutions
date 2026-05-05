#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    int x1,y1,z1,x2,y2,z2;
    double d;
    cout << "Ovaj zadatak uzima x,y i z koordinate 2 tacke i izracunava njihovu udaljenost u 3d prostoru." << endl;
    cout << "Unesite koordinate x koordinate tacke 1: ";
    cin >> x1;
    cout << "Unesite koordinate y koordinate tacke 1: ";
    cin >> y1;
    cout << "Unesite koordinate z koordinate tacke 1: ";
    cin >> z1;
    cout << "Unesite koordinate x koordinate tacke 2: ";
    cin >> x2;
    cout << "Unesite koordinate y koordinate tacke 2: ";
    cin >> y2;
    cout << "Unesite koordinate z koordinate tacke 2: ";
    cin >> z2;
    d = sqrt ( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) + ( z1 - z2 ) * ( z1 - z2 ) );
    cout << "Razdaljina je: " << d << ".";
}