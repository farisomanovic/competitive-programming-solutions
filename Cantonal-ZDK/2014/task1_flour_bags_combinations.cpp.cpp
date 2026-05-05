#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima m kg brasna i ispisuje sve moguce kombinacije od 10, 15 i 25 kg brasna." << endl;
    int i,j,k,m,m10,m15,m25,t;
    cout << "Unesite kile brasna: ";
    cin >> m;
    m10 = m / 10;
    m15 = m / 15;
    m25 = m / 25;
    t = 0;
    for ( i = 0 ; i <= m10 ; i++ )
    {
        for ( j = 0 ; j <= m15 ; j++ )
        {
            for ( k = 0 ; k <= m25 ; k++ )
            {
                if ( i * 10 + j * 15 + k * 25 == m )
                {
                    cout << m << " kila brasna se moze dobiti u vrecama od po " << i << " vreca od 10 kila, " << j << " vreca od 15 kila i " << k << " vreca od 25 kila." << endl;
                    t++;
                }
            }
        }
    }
    if ( t == 0 )
    {
        cout << "Za " << m << " kila brasna nema rijesenja.";
    }
}