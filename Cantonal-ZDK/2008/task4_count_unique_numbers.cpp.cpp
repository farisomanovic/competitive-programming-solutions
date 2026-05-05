#include <iostream>
using namespace std;

main () 
{
    int niz[50],i,j,n,k = 0,f;
    cout << "Program uzima niz brojeva i ispisuje koliko razlicitih brojeva ima u tom nizu." << endl;
    cout << "Unesite broj elemenata niza: ";
    cin >> n;
    
    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
        f = 0;
        for ( j = 0 ; j < i ; j++ )
        {
                if ( niz[i] == niz[j] )
                {
                    f = 1;
                    break;
                }
        }
        if ( f == 0 ) 
        {
            k++;
        }
    }
    cout << "U nizu koji ste unijeli ima " << k << " razlicitih clanova.";
}