#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima 2 broja koja moraju biti u rasponu od -30000 do 30000 i ispisuje min i max ili ako su isti da su jednaki." << endl;
    int x, y;
    cout << "Unesite prvi broj: ";
    cin >> x;
    cout << "Unesite drugi broj: ";
    cin >> y;
    if ( x == y )
    {
        cout << "Brojevi su jednaki.";
    } else
    {
        cout << "Max = " << max(x,y) << endl;
        cout << "Min = " << min(x,y) << endl;
    }
}