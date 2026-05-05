#include <iostream>
using namespace std;

main () {
    cout << "Program uzima broj n > 2 i ispisuje zbir dva prosta broja da daju n, ako je nemoguce ispisuje nemoguce." << endl;
    int i,j,t,n,prvi,drugi;
    cout << "Unesite prirodan broj: ";
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
    t=0;
    for ( i = 0 ; i < n ; i++ )
    {
        if ( niz[i] != 0 )
        {
            prvi = niz[i];
            for ( j = i; j < n ; j++ )
            {
                if ( niz[j] != 0 )
                {
                    drugi = niz[j];
                    if ( prvi + drugi == n )
                    {
                        t++;
                        cout << "Broj " << n << " se moze napisati kao zbir sljedeca dva prosta broja: " << prvi << " + " << drugi << endl;
                    }
                }
            }
        }
    }
    if ( t == 0 ) 
    {
        cout << "Broj " << n << " se ne moze napisati kao zbir 2 prosta broja";
    }
}