#include <iostream>
using namespace std;

main () 
{
    int n,suma = 0,i;
    cout << "Ovaj program uzima n clanova niza prirodnih brojeva." << endl;
    cout << "Ako je suma parna ispisati ce se svi parni brojevi." << endl;
    cout << "Ako je suma neparna ispisati ce se svi neparni brojevi." << endl;
    cout << "Ako je suma jednaka 0 ispisati ce se svi brojevi." << endl;
    cout << "Unesite broj elemenata: "; cin >> n;
    int niz[n-1];
    for ( i = 0 ; i < n ; i++ ) 
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
        suma = suma + niz[i];
    }
    if ( suma == 0 ) 
    {
        cout << "Posto je suma jednaka nuli ispisujemo sve brojeve niza: ";
        for ( i = 0 ; i < n ; i++ ) 
        {
            cout << niz[i] << ", ";
        }
    } else 
    {
        if ( suma % 2 == 0 ) 
    {
        cout << "Posto je suma parna sljedeci brojevi niza su parni: ";
        for ( i = 0 ; i < n ; i++ ) 
        {
            if ( niz[i] % 2 == 0 ) 
            {
                cout << niz[i] << ", ";
            }
        }
    }
    if ( suma % 2 != 0 ) 
    {
        cout << "Posto je suma neparna sljedeci brojevi niza su neparni: ";
        for ( i = 0 ; i < n ; i++ ) 
        {
            if ( niz[i] % 2 != 0 ) 
            {
                cout << niz[i] << ", ";
            }
        }
    }
    }
}