#include <iostream>
#include <string>
using namespace std;

main () 
{
    string niz[5],temp;
    int i,j;
    cout << "Ovaj program uzima pet stringova kao niz i reda ih po abecednom redu." << endl;
    for ( i = 0 ; i <= 4 ; i++ ) 
    {
        cout << "Unesite " << i + 1 << ". ime niza: ";
        cin >> niz[i];
    }
    for ( i = 0 ; i <= 3 ; i++ ) 
    {
        for ( j = i + 1 ; j <= 4 ; j++ )
        {
            if( niz[i] > niz[j] ) 
            {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
    cout << "Niz imena poredan po abecednom redu izgleda ovako: ";
    for ( i = 0 ; i <= 4 ; i++ ) 
    {
        cout << niz[i] << " ";
    }
}