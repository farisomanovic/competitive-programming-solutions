#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj n i ispisuje ga u kontra rijedosljedu." << endl;
    int n; 
    cout << "Unesite n: "; 
    cin >> n; 
    int unazad = 0; 
    while ( n > 0 ) 
    { 
        int cifra = n % 10; 
        unazad = unazad * 10 + cifra; 
        n /= 10; 
    }
    cout << "Broj unazad je: " << unazad << "\n"; 
}