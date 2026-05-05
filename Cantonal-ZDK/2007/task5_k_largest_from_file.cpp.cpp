#include <iostream>
#include <fstream>
using namespace std;

main () 
{
    cout << "Program uzima broj k i ispisuje k najvecih brojeva poredanih od veceg ka manjem." << endl;
    int k,n=0,i,j,temp;
    cout << "Unesite koliko brojeva zelite da se ispise: ";
    cin >> k;
    ifstream brojevitxt;
    brojevitxt.open("brojevi.txt");
    int broj;
    while ( ( brojevitxt >> broj ) ) {
        n++;
    }
    brojevitxt.clear();  // Clear the end-of-file flag
    brojevitxt.seekg( 0, ios::beg );
    int niz[n];
    n = 0;
    while ( ( brojevitxt >> broj ) ) {
        niz[n] = broj;
        n++;
    }
    brojevitxt.close();
    for ( i = 0 ; i < n ; i++ ) 
    {
        for ( j = i + 1 ; j <= n ; j++ )
        {
            if( niz[i] < niz[j] ) 
            {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
    for ( i = 0 ; i < k ; i++ )
    {
        cout << niz[i] << ", ";
    }
}