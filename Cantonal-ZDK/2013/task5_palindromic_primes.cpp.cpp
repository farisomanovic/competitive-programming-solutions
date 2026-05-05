#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima n < 10000 i pravi intevral od n do 2n i ispisuje sve palindromicne proste brojeve." << endl;
    int n,i,j,p,d,t,c,pe;
    cout << "Unesite n: ";
    cin >> n;
    int niz[2*n];
    for ( i = 0 ; i < 2 * n ; i++ )
    {
        niz[i] = i;
    }
    for ( i = 2 ; i < 2 * n ; i++ )
    {
        for ( j = 2 * i ; j < 2 * n ; j += i )
        {
            niz[j] = 0;
        }
    }
    cout << "Prosti palindromicni brojevi na intervalu od " << n << " do " << 2 * n << " su:";
    for ( i = n ; i < 2 * n ; i++ )
    {
        if ( niz[i] != 0 )
        {
            p = i / 10000;
            d = i % 10000 / 1000;
            t = i % 10000 % 1000 / 100;
            c = i % 10000 % 1000 % 100 / 10;
            pe = i % 10000 % 1000 % 100 % 10;
            if ( p == 0 && d == 0 && t == 0 && c == 0 && pe != 0 )
            {
                cout << i << " ";
            }
            if ( p == 0 && d == 0 && t == 0 && c != 0 && pe != 0 )
            {
                if ( c == pe )
                {
                    cout << i << " "; 
                }
            }
            if ( p == 0 && d == 0 && t != 0 && pe != 0 )
            {
                if ( t == pe )
                {
                    cout << i << " ";
                }
            }
            if ( p == 0 && d != 0 && pe != 0 )
            {
                if ( d == pe && t == c )
                {
                    cout << i << " ";
                }
            }
            if ( p != 0 && pe != 0 )
            {
                if ( p == pe && d == c )
                {
                    cout << i << " ";
                }
            }
        }
    }
}