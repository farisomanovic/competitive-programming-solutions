#include <iostream>
using namespace std;

int main() 
{
    int dan, mjesec, godina;
    cout << "Unesite dan: ";
    cin >> dan;
    cout << "Unesite mjesec: ";
    cin >> mjesec;
    cout << "Unesite godinu: ";
    cin >> godina;
    int mjeseci[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ( godina % 4 == 0 && ( godina % 100 != 0 || godina % 400 == 0 ) ) 
    {
        mjeseci[1] = 29;
    }
    int redni_broj_dana = dan;
    for ( int i = 0 ; i < mjesec - 1 ; i++ ) 
    {
        redni_broj_dana += mjeseci[i];
    }
    cout << "Redni broj dana je: " << redni_broj_dana << endl;
    return 0;
}
