#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima k brojeva u niz i racuna njihovu sumu. Ako je suma parna ispisuje najveci broj niza a ako je neparna najmanji. " << endl;
    int k,i,min,max,suma;
    cout << "Unesite koliko clanova ima niz: ";
    cin >> k;
    int niz[k];
    suma = 0;
    min = 1000000;
    max = 0;
    for ( i = 0 ; i < k ; i++ )
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
        suma = suma + niz[i];
        if ( niz[i] < min )
        {
            min = niz[i];
        }
        if ( niz[i] > max )
        {
            max = niz[i];
        }
    }
    if ( suma % 2 == 0 )
    {
        cout << "Suma je parna i najveci clan je: " << max;
    } else
    {
        cout << "Suma je neparna i najmanji clan je: " << min;
    }
}