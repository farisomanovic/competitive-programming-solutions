#include <iostream>
using namespace std;

main ()
{
    cout << "Program uzima trocifrene brojeve a i b a < b i nalazi sve armstrongove brojeve na tom intervalu." << endl;
    int a,b,pc,dc,tc,bb,i;
    cout << "Unesite a: ";
    cin >> a;
    cout << "Unesite b: ";
    cin >> b;
    if ( a < 100 || a > 999 || b < 100 || b > 999 || a > b )
    {
        cout << "Nesispravan unos!";
        return 1;
    }
    for ( i = a ; i <= b ; i++ )
    {
        pc = i / 100;
        dc = ( i % 100 ) / 10;
        tc = i % 10;
        if ( ( pc * pc * pc ) + ( dc * dc * dc ) + ( tc * tc * tc ) == i )
        {
            cout << i << ", ";
            bb++;
        }
    }
    cout << "Na intervalu od " << a << " do " << b << " ima " << bb << " armstrongovih brojeva.";
}