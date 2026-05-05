#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima neki prirodan broj manji od 32726 i ispisuje sumu njegovih neparnih cifara vecih od 4." << endl;
    int n,i,suma,p,d,t,c,pe;
    cout << "Unesite prirodan broj:";
    cin >>n;
    if ( n > 32726 )
    {
        cout << "Unijeli ste prevelik broj.";
        return 1;
    }
    p = n / 10000;
    d = n % 10000 / 1000;
    t = n % 10000 % 1000 / 100;
    c = n % 10000 % 1000 % 100 / 10;
    pe = n % 10000 % 1000 % 100 % 10;
    suma = 0;
    if ( p % 2 != 0 && p > 4 )
    {
        suma += p;
    }
    if ( d % 2 != 0 && d > 4 )
    {
        suma += d;
    }
    if ( t % 2 != 0 && t > 4 )
    {
        suma += t;
    }
    if ( c % 2 != 0 && c > 4 )
    {
        suma += c;
    }
    if ( pe % 2 != 0 && pe > 4 )
    {
        suma += pe;
    }
    cout << "Suma neparnih cifara vecih od 4 je: " << suma;
}