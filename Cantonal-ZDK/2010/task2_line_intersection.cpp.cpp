#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima k1,n1 koeficijente prve prave i k2,n2 druge prave i odredzuje njihov polozaj i tacku prijeseka." << endl;
    int k1,n1,k2,n2;
    double x,y;
    cout << "Unesite k koeficient prve jednacine: ";
    cin >> k1;
    cout << "Unesite n koeficient prve jednacine: ";
    cin >> n1;
    cout << "Unesite k koeficient druge jednacine: ";
    cin >> k2;
    cout << "Unesite n koeficient druge jednacine: ";
    cin >> n2;
    if ( k1 == k2 )
    {
        if ( n1 == n2 )
        {
            cout << "Prave se nalaze jedna na drugoj zato sto su iste i imaju beskonacno mnogo tacaka dodira.";
        } else
        {
            cout << "Prave su paralelne i nemaju tacku dodira.";
        }
    } else
    {
        x = -( n1 - n2 ) / ( k1 - k2 );
        y = ( k1 * x ) + n1;
        cout << "Prave se sijeku i koordinate prijeseka su x=" << x << " y=" << y;
    }
}