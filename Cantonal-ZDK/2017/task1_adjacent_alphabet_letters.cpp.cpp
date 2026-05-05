#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "Program uzima rijec i ispisuje broj susjednih slova." << endl;
    string rijec;
    cout << "Unesite rijec: ";
    cin >> rijec;
    int broj = 0;
    for ( int i = 0 ; i < rijec.size() - 1 ; i++ ) 
    {
        if ( rijec[i] - 0  == ( rijec[i + 1] - 1 ) || rijec[i] - 0  == ( rijec[i + 1] + 1 ) ) 
        {
        broj++;
        }
    }
    cout << "Broj susjednih slova je " << broj << endl;
}
