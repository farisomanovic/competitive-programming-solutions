#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima 3 broja ispisuje najveci broj, broj najveci brojeva, najmanji i broj najmanjih brojeva." << endl;
    int a,b,c,maxi,mini,brm,brv;
    cout << "Unesite prvi broj: ";
    cin >> a;
    cout << "Unesite drugi broj: ";
    cin >> b;
    cout << "Unesite treci broj: ";
    cin >> c;
    if ( a == b && b == c )
    {
        cout << "Najmanji broj je " << a << endl;
        cout << "Broj najmanjih brojeva je 3." << endl; 
        cout << "Najveci broj je " << a << endl;
        cout << "Broj najvecih brojeva je 3." << endl;
    } else 
    {
        if ( a == b || a == c || b == c )
        {
            maxi = max(a,max(b,c));
            mini = min(a,min(b,c));
            if ( ( maxi == a || maxi == b ) && ( maxi == a || maxi == c ) && ( maxi == c || maxi == b ) )
            {
                cout << "Najmanji broj je " << mini << endl;
                cout << "Broj najmanjih brojeva je 1." << endl; 
                cout << "Najveci broj je " << maxi << endl;
                cout << "Broj najvecih brojeva je 2." << endl;
            }
            else 
            {
                cout << "Najmanji broj je " << mini << endl;
                cout << "Broj najmanjih brojeva je 2." << endl; 
                cout << "Najveci broj je " << maxi << endl;
                cout << "Broj najvecih brojeva je 1." << endl;
            }
        }
        else
        {
            maxi = max(a,max(b,c));
            mini = min(a,min(b,c));
            cout << "Najmanji broj je " << mini << endl;
            cout << "Broj najmanjih brojeva je 1." << endl; 
            cout << "Najveci broj je " << maxi << endl;
            cout << "Broj najvecih brojeva je 1." << endl;
        }
    }

}