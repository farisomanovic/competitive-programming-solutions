#include <iostream>
using namespace std;

main () 
{
    cout << "Ovaj program uzima paran prirodan broj i ispisuje njegovog najveceg neparnog djelioca." << endl;
    int broj,i,djelilac;
    cout << "Unesite broj: ";
    cin >> broj;
    while ( broj % 2 != 0 )
    {
        cout << "Niste unijeli paran broj unesite ponovo: " << endl;
        cin >> broj;
    }
    for ( i = broj - 1; i > 1 ; i-- )
    {
        if ( broj % i == 0 )
        {
            if ( i % 2 != 0 )
            {
                djelilac = i;
                break;
            }
        }
    }
    cout << "Najveci neparni djelilac za broj " << broj << " je " << djelilac;
}