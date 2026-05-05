#include <iostream>
using namespace std;

main () {
    cout << "Program uzima 4 cijela broja x,y,z i k izvrsava transformacije zadane na papiru." << endl;
    int x,y,z,k,max,suma;
    cout << "Unesite x: ";
    cin >> x;
    cout << "Unesite y: ";
    cin >> y;
    cout << "Unesite z: ";
    cin >> z;
    cout << "Unesite k: ";
    cin >> k;
    max = 0;
    if ( x > max )
    {
        max = x;
    }
    if ( y > max )
    {
        max = y;
    }
    if ( z > max )
    {
        max = z;
    }
    if ( k > max )
    {
        max = k;
    }
    if ( max >= 500 )
    {
        x = x - 50;
        y = y - 50;
        suma = x + y + z + k;
        cout << "Novodobijeni brojevi su: " << x << ", " << y << ", " << z << " i " << k << " a suma je " << suma;
    } else
    {
        x = x - ( x % 10 );
        y = y - ( y % 10 );
        z = z - ( z % 10 );
        k = k - ( k % 10 );
        suma = x + y + z + k;
        cout << "Novodobijeni brojevi su: " << x << ", " << y << ", " << z << " i " << k << " a suma je " << suma;
    }
}