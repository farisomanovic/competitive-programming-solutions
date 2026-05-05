#include <iostream>
#include <math.h>
using namespace std;

main () 
{
    cout << "Program uzima koordinate prvog kruga , koordinate drugog kruga." << endl;
    cout << "Zatim uzima koordinate neke tacke , poluprecnik prvog i drugog kruga." << endl;
    cout << "Zatim odredzuje polozaj tacke u odnosnu na krugove i to ispisuje." << endl;
    int x1,y1,x2,y2,x3,y3,d1,d2;
    double d1t,d2t,d12;
    cout << "Unesite x koordinate prvog kruga: ";
    cin >> x1;
    cout << "Unesite y koordinate prvog kruga: ";
    cin >> y1;
    cout << "Unesite x koordinate drugog kruga: ";
    cin >> x2;
    cout << "Unesite y koordinate drugog kruga: ";
    cin >> y2;
    cout << "Unesite x koordinate proizvoljne tacke: ";
    cin >> x3;
    cout << "Unesite y koordinate proizvoljne tacke: ";
    cin >> y3;
    cout << "Unesite poluprecnik prvog kruga: ";
    cin >> d1;
    cout << "Unesite poluprecnik drugog kruga: ";
    cin >> d2;
    d12 = sqrt ( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
    d1t = sqrt ( ( x3 - x1 ) * ( x3 - x1 ) + ( y3 - y1 ) * ( y3 - y1 ) );
    d2t = sqrt ( ( x3 - x2 ) * ( x3 - x2 ) + ( y3 - y2 ) * ( y3 - y2 ) );
    if ( d1 + d2 < d12 )
    {
        if ( d1t < d1 )
        {
            cout << "Tacka se nalazi u prvom krugu." << endl;
        }
        if ( d2t < d2 ) 
        {
            cout << "Tacka se nalazi u drugom krugu." << endl;
        }
        if ( d1t > d1 && d2t > d2 )
        {
            cout << "Tacka se nalazi van oba kruga." << endl;
        }
    }
    if ( d1 + d2 >= d12 ) 
    {
        if ( d1t <= d1 && d2t <= d2 )
        {
            cout << "Tacka se nalazi u presjeku dva kruga." << endl;
        } else
        {
            if ( d1t <= d1 && d2t >= d2 )
            {
                cout << "Tacka se nalazi u prvom krugu." << endl;
            }
            if ( d2t < d2 && d1t > d1 ) 
            {
                cout << "Tacka se nalazi u drugom krugu." << endl;
            }
        }
        if ( d1t > d1 && d2t > d2 )
        {
            cout << "Tacka se nalazi van oba kruga." << endl;
        }
    }
}