#include <iostream>
#include <iomanip>
using namespace std;

main () 
{
    cout << "Program uzima brzinu bicikliste rvog i drugog i muhe i razdaljinu od a do b. Muha putuje od jednog do drugog bicikliste i nazad. Program ispisuje koliko je muha presla." << endl;
    double va,vb,vm,d;
    double dm;
    cout << "Unesite brzinu bicikliste a u km/h: ";
    cin >> va;
    cout << "Unesite brzinu bicikliste b u km/h: ";
    cin >> vb;
    cout << "Unesite brzinu muhe u km/h: ";
    cin >> vm;
    cout << "Unesite razdaljinu biciklista: ";
    cin >> d;
    dm = ( vm * d ) / ( va + vb );
    cout << dm;
}