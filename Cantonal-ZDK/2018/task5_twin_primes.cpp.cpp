#include <iostream>
using namespace std;

main () {
    cout << "Program uzima n i a i ispisuje a parova prostih brojeva vecih od n." << endl;
    int n, a, i ,j , niz[30000],brojac = 0,prvi,drugi,temp;
    cout << "Unesite n: ";
    cin >> n;
    cout << "Unesite a: ";
    cin >> a;
    for ( i = 0 ; i < 30000 ; i++ )
    {
        niz[i] = i;
    }
    for ( i = 2 ; i < 30000 ; i++ )
    {
        for ( j = i * 2 ; j < 30000 ; j += i )
        {
            niz[j] = 0;
        }
    }
    temp = 0;
    prvi = 0;
    drugi = 0;
    for ( i = n + 1 ; i < 30000 ; i++ )
    {
        if ( niz[i] != 0 )
        {
            temp = prvi;
            prvi = niz[i];
            drugi = temp;
            if ( prvi - drugi == 2 )
            {
                brojac++;
                cout << brojac << ". par je: ( " << drugi << ", " << prvi << " )" << endl;
            }
        }
        if ( brojac == a )
        {
            break;
        }
    }
}