#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    cout << "Program uzima koordinate dvije tacke A i B koje cine duz AB i racunaju najmanju udaljenost od koordinatnog pocetka" << endl;
    int x1,y1,x2,y2;
    double a,b,c,d,k,d1,d2,u;
    cout << "Unesite x koordinate tacke A: ";
    cin >> x1;
    cout << "Unesite y koordinate tacke A: ";
    cin >> y1;
    cout << "Unesite x koordinate tacke B: ";
    cin >> x2;
    cout << "Unesite y koordinate tacke B: ";
    cin >> y2;
    if ( x1 == x2 )
    {
        if ( ( y1 > 0 && y2 < 0 ) || ( y1 < 0 && y2 > 0 ) )
        {
        cout << "Najkraca udaljenost od prave do koordinatnog pocetka je " << x1;
        return 1;
        } else 
        {
            d = 1000000000000;
            d1 = sqrt ( ( x1 * x1 ) + ( y1 * y1 ) );
            d2 = sqrt ( ( x2 * x2 ) + ( y2 * y2 ) );
            if ( d < d1 )
            {
                if ( d < d2 )
                {
                    u = d;
                } 
            }
            if ( d1 < d2 )
            {
                if ( d1 < d )
                {
                    u = d1;
                } 
            }
            if ( d2 < d1 )
            {
                if ( d2 < d )
                {
                    u = d2;
                } 
            }
            cout << "Najkraca udaljenost od prave do koordinatnog pocetka je " << u;
            return 1;
        }
    } 
    if ( y1 == y2 )
    {
        if ( ( x1 > 0 && x2 < 0 ) || ( x1 < 0 && x2 > 0 ) )
        {
        cout << "Najkraca udaljenost od prave do koordinatnog pocetka je " << y1;
        return 1;
        } else 
        {
            d = 1000000000000;
            d1 = sqrt ( ( x1 * x1 ) + ( y1 * y1 ) );
            d2 = sqrt ( ( x2 * x2 ) + ( y2 * y2 ) );
            if ( d < d1 )
            {
                if ( d < d2 )
                {
                    u = d;
                } 
            }
            if ( d1 < d2 )
            {
                if ( d1 < d )
                {
                    u = d1;
                } 
            }
            if ( d2 < d1 )
            {
                if ( d2 < d )
                {
                    u = d2;
                } 
            }
            cout << "Najkraca udaljenost od prave do koordinatnog pocetka je " << u;
            return 1;
        }
    } 
    k = ( y2 - y1 ) / ( x2 - x1 );
    c = k * ( -x1 ) + y1;
    b = 1;
    a = k;
    d = abs ( c / ( sqrt ( ( a * a ) + ( b * b ) ) ) );
    d1 = sqrt ( ( x1 * x1 ) + ( y1 * y1 ) );
    d2 = sqrt ( ( x2 * x2 ) + ( y2 * y2 ) );
    if ( x1 > 0 && y1 > 0 && x2 > 0 && y2 > 0 && c == 0 )
    {
        d = 1000000000000;
    }
    if ( x1 < 0 && y1 > 0 && x2 < 0 && y2 > 0 && c == 0 )
    {
        d = 1000000000000;
    }
    if ( x1 < 0 && y1 < 0 && x2 < 0 && y2 < 0 && c == 0 )
    {
        d = 1000000000000;
    }
    if ( x1 > 0 && y1 < 0 && x2 > 0 && y2 < 0 && c == 0 )
    {
        d = 1000000000000;
    }
    if ( d < d1 )
    {
        if ( d < d2 )
        {
            u = d;
        } 
    }
    if ( d1 < d2 )
    {
        if ( d1 < d )
        {
            u = d1;
        } 
    }
    if ( d2 < d1 )
    {
        if ( d2 < d )
        {
            u = d2;
        } 
    }
    cout << "Najkraca udaljenost od prave do koordinatnog pocetka je " << u;
}