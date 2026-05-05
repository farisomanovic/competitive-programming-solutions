#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima n,a,b i c i radi zadatak sa papira." << endl;
    int n,a,b,c,suma,i;
    cout << "Unesite n: ";
    cin >> n;
    cout << "Unesite a: ";
    cin >> a;
    cout << "Unesite b: ";
    cin >> b;
    cout << "Unesite c: ";
    cin >> c;
    if ( a > n || b > n || c > n )
    {
        cout << "Neispravan unos.";
        return 0;
    }
    suma = 0;
    for ( i = 1 ; i <= n ; i++ )
    {
        if ( ( i % a == 0 && i % c != 0 ) || ( i % b == 0 && i % c != 0 ) )
        {  
            suma += i;
        }
    }
    cout << "Suma je " << suma;
}