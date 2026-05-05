#include <iostream>
using namespace std;

main () 
{
    cout << "Program ispisuje sve trocifrene proste brojeve cije permuntacije opet daju proste brojeve." << endl;
    int niz[1000];
    int i,j,je,d,s,dr,t,c,pe,se;
    for ( i = 0 ; i < 1000 ; i++ )
    {
        niz [i] = i;
    }
    for ( i = 2 ; i < 1000 ; i++ )
    {
        for ( j = i * 2 ; j < 1000 ; j += i )
        {   
            niz[j] = 0;
        }
    }
    for ( i = 100 ; i < 1000 ; i++ )
    {
        if ( niz[i] != 0 )
        {
            s = i / 100;
            d = ( i % 100 ) / 10;
            je = i % 10;
            dr = s*100 + je*10 + d;
            t = d*100 + s*10 + je;
            c = d*100 + je*10 + s;
            pe = je*100 + s*10 + d;
            se = je*100 + d*10 + s;
            if ( niz[dr] != 0 && niz[t] != 0 && niz[c] != 0 && niz[pe] != 0 && niz[se] != 0 )
            {
                cout << "Broj " << i << " je prost i sve njegove permuntacije su proste a one su: " << i << ", " << dr << ", " << t << ", " << c << ", " << pe << ", " << se << endl;
            }
        }
    }
}