#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    cout << "Program uzima hipotenuzu i ako postoji pravougli trouga sa cijelim brojevima koji odgovara kriteriju ispisuje katete ako ne trougao nije pravugli." << endl;
    int a,b,c,i,j,f = 0;
    cout << "Unesite hipotenuzu:";
    cin >> c;
    for ( i = 1 ; i < c ; i++ )
    {
        for ( j = c - 1 ; j > 0 ; j-- )
        {
            if ( c == sqrt( ( i * i ) + ( j * j ) ) )
            {
                cout << "Trougao je pravougli i katete su: " << i << " i " << j << endl;
                f = 1;
                break;
            }
        }
        if ( f == 1 )
        {
            break;
        }
    }
    if ( f == 0 ) 
    {
        cout << "Trougao nije pravugli.";
    }
}