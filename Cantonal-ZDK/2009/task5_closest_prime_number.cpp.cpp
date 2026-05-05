#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima jedan prirodan broj manji od 32000 i ispisuje njemu najblizi prost broj." << endl;
    int broj,i,j,najbliziv,najblizim,v=0,m=0,kojiv,kojim,niz[32000];
    cout << "Unesite broj: ";
    cin >> broj;
    if ( broj > 32000 || broj < 1 )
    {
        cout << "Unijeli ste broj koji nije u opsegu od 1 do 32000.";
        return 1;
    }
    for ( i = 0 ; i <= 32000 ; i++ )
    {
        niz [i] = i;
    }
    for ( i = 2 ; i <= 32000 ; i++ )
    {
        for ( j = i * 2 ; j <=32000 ; j += i )
        {
            niz[j] = 0;
        }
    }
    if ( broj == niz[broj] )
    {
        cout << "Najblizi prost broj broju " << broj << " je on sam sebi.";
    } else
    {
        for ( i = broj ; i <= 32000 ; i++ )
        {
            if ( niz[i] != 0 )
            {
                kojiv = niz[i];
                break;
            } else
            {
                v++;
            }
        }
        for ( i = broj ; i >= 1 ; i-- )
        {
            if ( niz[i] != 0 )
            {
                kojim = niz[i];
                break;
            } else
            {
                m++;
            }
        }
        if ( m == v )
        {
            cout << "Najblizi prosti brojevi broju " << broj << " su brojevi " << kojim << " i " << kojiv;
        } else
        {
            if ( v < m ) 
            {
                cout << "Najblizi prosti broj broju " << broj << " je broj " << kojiv;
            } else
            {
                cout << "Najblizi prosti broj broju " << broj << " je broj " << kojim;
            }
        }
    }
}