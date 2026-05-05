#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima vrijednost realnog broja x na intervalu od 0 do 1 te ispisuje vrijednost funkcije y sa papira." << endl;
    double x,y;
    cout << "Unesite vrijednost x: ";
    cin >> x;
    if ( x < 0 || x > 1.01 )
    {
        cout << "Niste unijeli x u granicama.";
        return 1;
    }
    if ( x >= 0 && x <= 0.25 )
    {
        y = x;
    }
    if ( x >= 0.26 && x <= 0.50 )
    {
        y = 0.50 - x;
    }
    if ( x >= 0.51 && x <= 0.75 )
    {
        y = 0.50 - x;
    }
    if ( x >= 0.76 && x <= 1 )
    {
        y = x - 1;
    }
    cout << "Vrijednost funkcije za x=" << x << " je y=" << y;
}