#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima vrijeme po grincu ( sat, minute, sekunde ) i na osnovu trajanja leta u sekundama odrediti vrijeme slijetanja po grincu." << endl;
    int sati,minute,sekunde,ukupno,let,trenutno,nsa,nm,nse;
    cout << "Unesite sate: ";
    cin >> sati;
    cout << "Unesite minute: ";
    cin >> minute;
    cout << "Unesite sekunde: ";
    cin >> sekunde;
    cout << "Unesite trajanje leta u sekundama: ";
    cin >> let;
    trenutno = ( sati * 3600 ) + ( minute * 60 ) + sekunde;
    ukupno = trenutno + let;
    if ( ukupno > 86400 )
    {
        ukupno = ukupno - 86400;
    }
    nsa = ukupno / 3600;
    nm = ( ukupno % 3600 ) / 60;
    nse = ( ( ukupno % 3600 ) % 60 );
    cout << "Avion slijece u " << nsa << " sati " << nm << " minuta " << nse << " sekundi.";
}