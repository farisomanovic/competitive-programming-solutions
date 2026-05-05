#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima prirodan broj i ispisuje najveci binarni razmak." << endl;
    int n, gap = 0, najvecigap = 0, temp, prvanula;
    cout << "Unesite prirodan broj n: ";
    cin >> n;
    temp = n;
    if ( temp % 2 == 0 )
    {
        prvanula = 1;
    }
    while ( temp > 1 )
    {
        gap = 0;
        if ( temp % 2 == 0 )
        {
            gap++;
            temp /= 2;
            while ( temp % 2 == 0 )
            {
                gap++;
                temp /= 2;
            }
            if ( prvanula == 1 )
            {
                gap = 0;
                prvanula = 0;
            }
        } else
        {
            temp = temp / 2;
        }
        if ( gap > najvecigap )
        {
            najvecigap = gap;
        }
    }
    cout << "Za broj " << n << " najveci binarni razmak je: " << najvecigap;
}