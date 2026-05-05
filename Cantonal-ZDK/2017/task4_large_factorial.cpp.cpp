#include <iostream>
using namespace std;

void pomnozi ( int niz[], int &duzina, int x ) 
{
    int prijenos = 0; 
    for ( int i = 0 ; i < duzina ; i++ ) 
    {
        int proizvod = niz[i] * x + prijenos; 
        niz[i] = proizvod % 10; 
        prijenos = proizvod / 10; 
    }
    while (prijenos) 
    {
        niz[duzina] = prijenos % 10;
        prijenos /= 10;
        duzina++;
    }
}
void faktorijel ( int n, int niz[], int &duzina ) 
{
    niz[0] = 1; 
    duzina = 1; 
    for ( int i = 2 ; i <= n ; i++ ) 
    {
        pomnozi(niz, duzina, i); 
    }
}

int main() 
{
    int n;
    cout << "Program izracunava faktorijel nekog broja manjego do 100." << endl;
    cout << "Unesite broj n (0 <= n < 100): ";
    cin >> n;
    if (n < 0 || n >= 100) 
    {
        cout << "Broj nije dozvoljen." << endl;
        return 0;
    }
    int niz[200]; 
    int duzina; 
    faktorijel ( n, niz, duzina );
    cout << "Faktorijel broja " << n << " je: ";
    for ( int i = duzina - 1 ; i >= 0 ; i-- ) 
    {
        cout << niz[i];
    }
}
