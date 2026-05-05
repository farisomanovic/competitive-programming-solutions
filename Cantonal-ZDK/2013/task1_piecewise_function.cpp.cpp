#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj x tipa real i izraunava y prema formuki na papiru." << endl;
    double y,x;
    cout << "Unesite x:";
    cin >> x;
    if ( x < 0 )
    {
        y = -10;
    }
    if ( 0 <= x && x < 1 )
    {
        y = 1000 * x;
    }
    if ( 1 <= x && x < 10 )
    {
        y = 10 * x;
    }
    if ( x >= 10 )
    {
        y = x / 10;
    }
    cout << "Y = " << y;
}