#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima prirodan broj n < 32726 i ispisuje zadnje dvije cifre broja 2 na n." << endl;
    int n,zdc,i,broj;
    cout << "Unesite prirodan broj:";
    cin >>n;
    if ( n > 32726 )
    {
        cout << "Unijeli ste prevelik broj.";
        return 1;
    }
    broj = 1;
    for ( i = 1 ; i <= n ; i++ )
    {
        broj *= 2;
    }
    zdc = broj % 100; 
    cout << "Zadnje dvije cifre broj 2 na " << n << " odnosno broja " << broj << " su: " << zdc;
}