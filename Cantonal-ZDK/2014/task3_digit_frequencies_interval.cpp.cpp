#include <iostream>
using namespace std;

int main() 
{
    cout << "Program uzima n1 i n2 pravi interval prirodnih brojeva od n1 do n2 ukljucujuci i njih te ispisuje koliko puta se koja cifra pojavljuje." << endl;
    int n1, n2; 
    cout << "Unesite n1: "; 
    cin >> n1;
    cout << "Unesite n2: ";
    cin >> n2;
    int brojac[10] = {0}; 
    for ( int i = n1 ; i <= n2; i++ ) 
    { 
        int broj = i; 
        while (broj > 0) { 
            int cifra = broj % 10; 
            brojac[cifra]++; 
            broj /= 10; 
        }
    }
    for ( int i = 0 ; i < 10; i++ ) 
    {
        cout << "Cifra " << i << " se pojavljuje " << brojac[i] << " puta" << endl;
    }
}
