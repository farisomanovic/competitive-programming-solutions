#include <iostream>
using namespace std;

main () 
{
    cout << "Program rijesava jednacinu ax+by=c gdje a, b, c korisnik unosi a x iy su na intervalu od 9 do 20 i ispisuje sve cijele vrijednosti x i y." << endl;
    int a, b, c, x, y;
    cout << "Unesite a: ";
    cin >> a;
    cout << "Unesite b: ";
    cin >> b;
    cout << "Unesite c: ";
    cin >> c;
    for ( x = 9 ; x <= 20 ; x++ )
    {
        for ( y = 9 ; y <= 20 ; y++ )
        {
            if ( a*x + b*y == c )
            {
                cout << "Rijesenja su x = " << x << " y = " << y << endl;
            }
        }
    }
}