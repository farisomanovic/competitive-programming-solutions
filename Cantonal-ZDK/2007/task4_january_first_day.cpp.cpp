#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima godinu u rasponu od 1600-2024 i ispisuje koji je dan na prvi januar." << endl;
    int godina,brojdana,dan;
    cout << "Unesite godinu: ";
    cin >> godina;
    while ( godina > 2024 || godina < 1600 )
    {
        cout << "Unesite godinu u odgovarajucem rasponu: ";
        cin >> godina;
    }
    brojdana = ( 366 * ( ( 2024 - godina ) / 4 ) ) + ( 365 * ( ( 2024 - godina - ( 2024 - godina ) / 4 ) ) );
    if ( godina < 1901 && godina > 1800 )
    {
        brojdana = brojdana - 1;
    }
    if ( godina < 1801 && godina > 1700 )
    {
        brojdana = brojdana - 2;
    }
    if ( godina < 1701 && godina > 1600 )
    {
        brojdana = brojdana - 3;
    }
    dan = brojdana % 7;
    switch (dan) 
    {
        case 0:
            cout << "Ponedjeljak" << endl;
            break;
        case 1:
            cout << "Nedjelja" << endl;
            break;
        case 2:
            cout << "Subota" << endl;
            break;
        case 3:
            cout << "Petak" << endl;
            break;
        case 4:
            cout << "Cetvrtak" << endl;
            break;
        case 5:
            cout << "Srijeda" << endl;
            break;
        case 6:
            cout << "Utorak" << endl;
            break;
    }
}
