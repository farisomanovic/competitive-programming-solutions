#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    cout << "Program uzima koeficijente kvadratne jednacine i izracunava rijesenja." << endl;
    int a,b,c;
    double x1,x2;
    cout << "Unesite koeficijent a: ";
    cin >> a;
    cout << "Unesite koeficijent b: ";
    cin >> b;
    cout << "Unesite koeficijent c: ";
    cin >> c;
    if ( ( ( b * b ) - 4*a*c ) > 0 )
    {
    x1 = ( - b + sqrt ( ( b * b ) - 4*a*c ) ) / ( 2 * a );
    x2 = ( - b - sqrt ( ( b * b ) - 4*a*c ) ) / ( 2 * a );
    cout << "Rijesnje su x1 = " << x1;
    cout << " i x2 = " << x2;
    } else
    {
        cout << "Ova kvadratna jednacina nema realnih rijesenja.";
    }
    
}