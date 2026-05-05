#include <iostream>
using namespace std;

main () 
{
    int gornja,donja,i,suma,n;
    cout << "Program uzima gornju i donju granicu i pravi interval koji ukjucuje te granice. Zatim mnozi sve clanove intervala i dobiva sumu. Zatim odredezuje sa koliko nula suma zavrsava." << endl;
    cout << "Unesite donju granicu: ";
    cin >> donja;
    cout << "Unesite gornju granicu: ";
    cin >> gornja;
    suma = 1;
    for ( i = donja ; i <= gornja ; i++ )
    {
        suma = suma * i;
    }
    n = 0;
    while ( suma % 10 == 0 )
    {
        suma = suma / 10;
        n++;
    }
    cout << "Suma ima " << n << " nula.";
}