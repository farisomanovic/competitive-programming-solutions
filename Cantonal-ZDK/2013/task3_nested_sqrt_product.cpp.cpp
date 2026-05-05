#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

main () 
{
    cout << "Program uzima prirodne brojeve k i n < 1000 i izracunava izraz na papiru." << endl;
    int k,n,i,j;
    double r,tp;
    cout << "Unesite k: ";
    cin >> k;
    cout << "Unesite n: ";
    cin >> n;
    tp = sqrt(k);
    r = 1 / tp;
    for ( i = 2 ; i <= n ; i++ )
    {
        tp = sqrt(k);
        for ( j = 2 ; j <= i ; j++ )
        {
            tp = sqrt ( k + tp );
        }
        r *= 1 / tp;
    }
    cout << "r= " << setprecision(3) << r << endl;
}