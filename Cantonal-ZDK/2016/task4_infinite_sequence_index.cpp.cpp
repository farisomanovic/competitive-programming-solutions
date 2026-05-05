#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima prirodan broj n i ispisuje koji je to broj u tom nizu. Niz je 1,1,2,1,2,3,1,2,3,4,1,2,3,4,5...." << endl;
    int n, i = 0, j = 1, k = 1;
    cout << "Unesite n: ";
    cin >> n;
    int niz[n];
    while ( i < n )
    {
        for ( j = 1 ; j <=k ; j++ )
        {
            niz[i] = j;
            i++;
            if ( i == n )
            {
                break;
            }
        }
        k++;
    }
    cout << n << ". clan tog niza je: " << niz[n-1];
}