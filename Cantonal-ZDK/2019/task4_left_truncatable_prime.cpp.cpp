#include <iostream>
#include <cmath>
using namespace std;

bool prost(int n)
{
    if ( n < 2 )
    {
        return false;
    }
    for ( int i = 2 ; i <= sqrt( n ) ; i++ )
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

main () 
{
    cout << "Program uzima broj i ispisuje jeli lijevo izrezivan prost broj." << endl;
    int n, cifre, brojac = 0, i, broj, j, djelioc = 1;
    cout << "Unesite broj: ";
    cin >> n;
    broj = n;
    while ( broj > 0 )
    {
        broj = broj / 10;
        cifre++;
    }
    int brojevi[cifre];
    brojevi[0] = n;
    if ( prost( n ) )
    {
        brojac++;
        for ( i = 0 ; i < cifre - 1 ; i++ )
        {
            djelioc *= 10;
        }
        for ( i = 0 ; i < cifre - 1 ; i++ )
        {
            n = n % djelioc;
            if ( prost( n ) )
            {
                brojevi[i + 1] = n;
                brojac++;
            }
            djelioc = djelioc / 10;
        }
        if ( brojac == cifre )
        {
            cout << "Broj " << brojevi[0] << " je lijevo izrezivan prost broj i njegove ijevo izrezivane cifre su: ";
            for ( i = 1 ; i < cifre ; i++ )
            {
                cout << brojevi[i] << ", ";
            }
        } else
        {
            cout << "Broj " << brojevi[0] << " nije lijevo izrezivan prost broj.";
            return 1;
        }
    } else
    {   
        cout << "Broj " << n << " nije lijevo izrezivan prost broj.";
        return 1;
    }
}
