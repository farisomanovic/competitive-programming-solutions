#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string recenica; 
    cout << "Unesite recenicu: "; 
    getline(cin, recenica); 
    string skracenica;
    bool prva = true; 
    for ( int i = 0 ; i < recenica.size() ; i++ ) 
    { 
        if (recenica[i] == ' ') 
        { 
            prva = false; 
        } else if ( i == 0 || recenica[i-1] == ' ') 
        { 
            string rijec = recenica.substr(i, recenica.find(' ', i) - i); 
            if (prva || (rijec != "i" && rijec != "pa" && rijec != "te" && rijec != "ni" && rijec != "niti" && rijec != "a" && rijec != "ali" && rijec != "nego" && rijec != "no" && rijec != "ili")) 
            { 
                skracenica += toupper(recenica[i]); 
            }
        }
    }
    cout << "Skracenica je: " << skracenica << "\n"; 
    return 0;
}
