#include <iostream>
using namespace std;

main () 
{
    int a,b,x;
    cout << "Program uzima a,b i x i provjerava u kojem od tri intervala [a,b],[1,a-1] i [b+1,32767] se x nalazi." << endl;
    cout << "Granice za x su 1 i 32767 (ti brojevi se mogu unijeti)." << endl;
    cout << "Unesite a: ";
    cin >> a;
    cout << "Unesite b: ";
    cin >> b;
    if ( a >= b )
    {
        cout << "Donja granica intervala ne moze biti veca ili jednaka od gornje.";
        return 1;
    }
    cout << "Unesite x: ";
    cin >> x;
    if ( x < 1 || x > 32767 )
    {
        cout << "Greska! Unesite x izmedu 1 i 32767.";
        return 1;
    }
    if ( x >= a && x <= b )
    {
        cout << x << " se nalazi u intervalu [a,b].";
    }
    if ( x < a )
    {
        cout << x << " se nalazi u intervalu [1,a-1]";
    }
    if ( x > b )
    {
        cout << x << " se nalazi u intervalu [b+1,32767].";
    }
}