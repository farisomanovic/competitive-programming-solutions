#include <iostream>
using namespace std;

main () 
{
    int a,b,manji,veci,temp;
    cout << "Ovaj program uzima dva prirodna broja i nalazi NZD (najveci zajednicki djelilac)." << endl;
    cout << "Unesite prvi broj: ";
    cin >> a;
    cout << "Unesite drugi broj: ";
    cin >> b;
    if ( a < 1 || b < 1 ) {
        while ( a < 1 || b < 1 ) {
        cout << "Niste unijeli dva prirodna broja!" << endl;
        cout << "Unesite ponovo!" << endl;
        cout << "Unesite prvi broj: ";
        cin >> a;
        cout << "Unesite drugi broj: ";
        cin >> b;
        }
    }
    if ( a >= b ) {
        manji = b;
        veci = a;
    } else {
        manji = a;
        veci = b;
    }
    while ( veci % manji != 0 ) {
        temp = manji;
        manji = veci % manji;
        veci = temp;
    }
    cout << "NZD od " << a << " i " << b << " je: " << manji;
}