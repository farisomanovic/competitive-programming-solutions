#include <iostream>
#include <cmath>
using namespace std;

main () 
{
    cout << "Program uzima broj vrhova i njihove koordinate i racuna povrsinu tog mnogougla. Npomena mnogougao mora biti konveksan." << endl;
    int x[500],y[500],n,pov,i;
    double xc,yc;
    cout << "Unesite broj vrhova: ";
    cin >> n;
    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Unesite x koordinate od " << i + 1 << ". vrha: ";
        cin >> x[i];
        cout << "Unesite y koordinate od " << i + 1 << ". vrha: ";
        cin >> y[i];
        xc += x[i];
        yc += y[i];
    }
    xc = xc / n;
    yc = yc / n;
    x[n] = x[0];
    y[n] = y[0];
    for ( i = 0 ; i < n ; i++ )
    {
        pov = pov + ( 0.5 * abs ( xc * ( y[i] - y[i+1] ) + x[i] * ( y[i+1] - yc ) + x[i+1] * ( yc - y[i] ) ) );
    }
    cout << "Povrsina je: " << pov;
}
