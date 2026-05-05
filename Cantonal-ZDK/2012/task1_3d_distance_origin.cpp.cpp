#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    int x1,y1,z1;
    double d;
    cout << "Ovaj zadatak uzima x,y i z koordinate i izracunava udaljenost od koordinatnog pocetka u 3d prostoru." << endl;
    cout << "Unesite koordinate x koordinate tacke 1: ";
    cin >> x1;
    cout << "Unesite koordinate y koordinate tacke 1: ";
    cin >> y1;
    cout << "Unesite koordinate z koordinate tacke 1: ";
    cin >> z1;
    d = sqrt ( ( x1 * x1 ) + ( y1 * y1 ) + ( z1 * z1 ) );
    cout << "Razdaljina je: " << d << ".";
}