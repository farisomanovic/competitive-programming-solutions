#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima brojeve i sabire svaki drugi koji je dvocifren kada suma postane veca od 100 prekida program i ispisuje sumu." << endl;
    int brojac = 0, i , suma = 0;
    while ( suma < 100 )
    {
        cin >> i;
        if ( i < 1 || i > 100 )
        {
            cout << "Neispravan unos!";
            return 0;
        }
        brojac++;
        if ( brojac % 2 == 0 && i >= 10 )
        {
            suma += i;
        }
    }
    cout << "Suma je: " << suma;
}