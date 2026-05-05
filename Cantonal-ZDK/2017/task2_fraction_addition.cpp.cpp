#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima 2 razlomka sabira ih i ispusuje sto skraceniji moze." << endl;
    int e, f, g, e1, f1, g1, brojnik, nazivnik, temp, manji, veci;
    cout << "Ako je razlomak nije mijesovit umjesto e unesite 0. Napomena da oba razlomka su ili mjesoviti ili nisu." << endl;
    cout << "Unesite mnozioca prvog razlomka: ";
    cin >> e;
    cout << "Unesite brojnik prvog razlomka: ";
    cin >> f;
    cout << "Unesite nazivnik prvog razlomka: ";
    cin >> g;
    cout << "Unesite mnozioca drugog razlomka: ";
    cin >> e1;
    cout << "Unesite brojnik drugog razlomka: ";
    cin >> f1;
    cout << "Unesite nazivnik drugog razlomka: ";
    cin >> g1;
        brojnik = ( g1 * ( ( e * g ) + f ) ) + ( g * ( ( e1 * g1 ) + f1 ) );
        nazivnik = g * g1;
        if ( brojnik % nazivnik == 0 )
        {
            cout << brojnik / nazivnik;
            return 1;
        }
        if ( brojnik >= nazivnik ) 
        {
            manji = nazivnik;
            veci = brojnik;
        } else 
        {
            manji = brojnik;
            veci = nazivnik;
        }
        while ( veci % manji != 0 ) {
            temp = manji;
            manji = veci % manji;
            veci = temp;
        }
        brojnik = brojnik / manji;
        nazivnik = nazivnik / manji;
        cout << brojnik << " / " << nazivnik;
        if ( brojnik > nazivnik )
        {  
            cout << endl << brojnik / nazivnik << " cijela i " << brojnik % nazivnik << " / " << nazivnik;
        } 
}