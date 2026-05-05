#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj clanova niza i njegove clanove i radi zadatak sa papira." << endl;
    int n, t, manji,i , j;
    cout << "Unesite broj clanova: ";
    cin >> n;
    int niz[n];
    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
    }
    for ( i = 0 ; i < n ; i++ )
    {
        t = 0;
        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( niz[j] < niz[i] )
            {
                cout << "( " << niz[i] << " -> " << niz[j] << " ), ";
                t = 1;
                break;
            }
        }
        if ( t == 0 || i == n - 1 )
        {
            cout << "( " << niz[i] << " -> " << "-1 ), ";
        }
        
    }
}