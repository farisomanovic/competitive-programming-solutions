#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj clanova niza i pravi 2 sume jednu sa parnim inedksom niza jednu sa neparnim." << endl;
    int n,sumpr,sumnpr,i;
    cout << "Unesite broj clanova: ";
    cin >> n;
    int niz[n];
    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
    }
    sumnpr = niz[0];
    sumpr = 0;
    for ( i = 1 ; i < n ; i++ )
    {
        if ( i % 2 == 0 )
        {
            sumnpr += niz[i];
        } else
        {
            sumpr += niz[i];
        }
    }
    cout << "spar = " << sumpr << " sumnpr = " << sumnpr;
}