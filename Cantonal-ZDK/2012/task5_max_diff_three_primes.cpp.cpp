#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima n i pravi interval od 2 do n i nalazi najevcu udaljenost izmedzu 3 prosta broja." << endl;
    int i,j,n,u,prvi = 0, drugi = 0,treci = 0, temp = 0,kojip,kojid,kojau,kojit;
    cout << "Unesite n: ";
    cin >> n;
    int niz[n];
    for ( i = 0 ; i < n ; i++ )
    {
        niz[i] = i;
    }
    for ( i = 2 ; i < n ; i++ )
    {
        for ( j = 2 * i ; j < n ; j += i )
        {
            niz[j] = 0;
        }
    }
    
    for ( i = 0 ; i < n ; i++ )
    {
        if ( niz[i] != 0 )
        {
            prvi = drugi;
            drugi = treci;
            treci = niz[i];
            temp = kojau;
            u = treci - prvi;
            if ( u > temp )
            {
                kojau = u;
                kojip = prvi;
                kojid = drugi;
                kojit = treci;
            }
        }
    }
    cout << "Najveca udaljenost izmedzu 3 susjedna prosta broja na intervalu od 1 do " << n << " je izmedzu brojeva " << kojip << " i " << kojid << " i " << kojit << " a udaljenost je " << kojau;
}