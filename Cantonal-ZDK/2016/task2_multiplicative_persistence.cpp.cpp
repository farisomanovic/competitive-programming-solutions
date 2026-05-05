#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima prirodan broj n i racuna njegovu multiplaktivnu otpornost." << endl;
    int n,i,cifra,o = 0,temp;
    cout << "Unesite n:";
    cin >> n;
    temp = n;
    while ( n > 0 )
    {
        i = n;
        n = 1;
        while ( i > 0 )
        {
            cifra = i % 10;
            i = i / 10;
            n *= cifra;
        }
        o++;
    }
    cout << "Multiplaktivna otpornost broja " << temp << " je " << o;
}