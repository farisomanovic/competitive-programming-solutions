#include <iostream>
using namespace std;

main () 
{
    int gornja,donja,i,j;
    cout << "Ovaj program uzima dva prirodna broja to jest gornju i donju granicu intervala. Zatim pronalazi sve proste brojeve u tom intervalu!" << endl;
    cout << "Napomena najveca gornja granica koja se mozes unijeti je 100000" << endl;
    cout << "Unesite donju granicu: ";
    cin >> donja;
    cout << "Unesite gornju granicu: ";
    cin >> gornja;
    int interval[100000];
    for ( i = 1 ; i <= gornja ; i++ ) 
    {
        interval[i] = i;
    }
	for ( i = 2 ; i <= gornja ; i++ ) 
    {
	    for ( j = 2 * i ; j <= gornja ; j += i ) 
        {
            interval[j] = 0; 
        }
    }
    cout << "Prosti brojevi na intervalu od " << donja << " do " << gornja << " su: " << endl;
	for ( i = donja ; i <= gornja ; i++ ) 
    {
        if ( interval[i] != 0 ) 
        {
            cout << interval[i] << " ";
        }
    }
}
