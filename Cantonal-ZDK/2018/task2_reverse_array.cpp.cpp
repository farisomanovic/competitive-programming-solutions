#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj clanova i clanove niza i ispisuje niz unatrag." << endl;
    int n,i;
    cout << "Unesite broj clanova niza: ";
    cin >> n;
    int niz[n];
    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Unesite " << i + 1 << ". clan niza: ";
        cin >> niz[i];
    }
    cout << "Obrnuti niz je: ";
    for ( i = n - 1 ; i >= 0 ; i-- )
    {
        cout << niz[i] << ","; 
    }
}