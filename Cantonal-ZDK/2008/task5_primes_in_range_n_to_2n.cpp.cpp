#include <iostream>
using namespace std;

main () 
{
    int gornja,donja,i,j,n;
    cout << "Ovaj program uzima prirodan broj n zatim pravi interval od n do 2*n. Zatim pronalazi sve proste brojeve u tom intervalu!" << endl;
    cout << "Napomena najveci n koji mozete unijeti je 1000" << endl;
    cout << "Unesite n: ";
    cin >> n;
    if ( n > 1000 )
    {
        cout << "Nije dozvoljeno unijeti broj veci od 1000.";
        return 1;
    }
    int interval[2000];
    for ( i = 1 ; i <= 2000 ; i++ ) 
    {
        interval[i] = i;
    }
	for ( i = 2 ; i <= 2000 ; i++ ) 
    {
	    for ( j = 2 * i ; j <= 2000 ; j += i ) 
        {
            interval[j] = 0; 
        }
    }
    cout << "Prosti brojevi na intervalu od " << n << " do " << 2 * n << " su: " << endl;
	for ( i = n ; i <= 2 * n ; i++ ) 
    {
        if ( interval[i] != 0 ) 
        {
            cout << interval[i] << " ";
        }
    }
}
