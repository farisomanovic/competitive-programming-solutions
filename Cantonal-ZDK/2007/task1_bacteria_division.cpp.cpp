#include <iostream>
using namespace std;

main () 
{
    cout << "Program radi diobu bakterije. Program uzima pocetni broj bakterija, diobni faktor i gornju granicu bakterija." << endl;
    int broj,diobni,gornja,sat=0;
    cout << "Unesite broj broj bakterija: ";
    cin >> broj;
    cout << "Unesite diobni faktor: ";
    cin >> diobni;
    cout << "Unesite gornju granicu bakterija: ";
    cin >> gornja;
    while ( broj < gornja ) 
    {
        broj = broj * diobni;
        sat++;
    }
    cout << "Broj sati potreban za ovu diobu bakterije je : " << sat;
}