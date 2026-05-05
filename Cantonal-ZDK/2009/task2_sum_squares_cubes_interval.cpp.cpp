#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima gornju i donju granicu i u tom intervalu ispisuje sumu koja se sastoji od kvadrata parnih i kubova neparnih brojeva." << endl;
    cout << "Najmanja donja granica je 1 a najveca gornja je 1000" << endl;
    int gornja,donja,suma=0,i;
    cout << "Unesite donju granicu intervala: ";
    cin >> donja;
    cout << "Unesite gornju granicu intervala: ";
    cin >> gornja;
    if ( donja >= gornja || gornja > 1000 || donja < 1 )
    {
        cout << "Netačan unos!";
        return 1;
    }
    for ( i = donja ; i <= gornja ; i++ )
    {
        if ( i % 2 == 0 )
        {
            suma = suma + ( i * i );
        } else
        {
            suma = suma + ( i * i * i );
        }
    }
    cout << "Suma je: " << suma;
}