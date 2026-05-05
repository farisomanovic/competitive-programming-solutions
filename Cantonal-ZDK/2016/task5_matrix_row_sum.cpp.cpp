#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima dimenzije matrice, njen sadrzaj i jedan broj x koji predstavlja broj nekog reda. Program ispisuje sve redove sa tim zbirom." << endl;
    cout << "Max visina i sirina matrice su 20:" << endl;
    int m, n, x, zbir = 0, i , j, zbir2 = 0;
    cout << "Unesite visinu matrice: ";
    cin >> m;
    cout << "Unesite sirinu matrice: ";
    cin >> n;
    if ( n < 1 || n > 20 || m < 1 || m > 20 )
    {
        cout << "Neispravan unos!";
        return 1;
    }
    int matrica[m][n];
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            cout << "Element ["<<i+1<<"]["<<j+1<<"]: ";
            cin >> matrica[i][j];
        }
    }
    cout << "Unesite indeks nekog reda: ";
    cin >> x;
    if ( x > n )
    {
        cout << "Neispravan unos!" << endl;
        return 2;
    }
    for ( i = 0 ; i < n ; i++ )
    {
        zbir += matrica[x + 1 ][i];
    }
    for ( i = 0 ; i < m ; i++ )
    {
        zbir2 = 0;
        if ( i != x - 1 )
        {
            for ( j = 0 ; j < n ; j++ )
            {
                zbir2 += matrica[i][j];
            }
        }
        if ( zbir2 == zbir )
        {
            cout << "Red " << i + 1 << " ima isti zbir kao red " << x << endl;
        }
    }
}