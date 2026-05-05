#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima n gdje je n 2<=n<=10000 i pravi interval od 1 do n i ispisuje svaki prirodan broj koji se moze napisati kao zbir kvadrata 2 prirodna broja." << endl;
    int n,i,j,k,t;
    cout << "Unesite n: ";
    cin >> n;
    for ( i = 2 ; i <= n ; i++ )
    {
        t = 0;
        for ( j = 1 ; j < i ; j++ )
        {
            for ( k = 1 ; k < i ; k++ )
            if ( i == ( j * j ) + ( k * k ) )
            {
                cout << i << endl;
                t = 1;
                break;
            }
            if ( t == 1 )
            {
                break;
            }
        }
    }
}