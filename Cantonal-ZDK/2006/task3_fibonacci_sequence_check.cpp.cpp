#include <iostream>
using namespace std;

main () 
{
    int broj,i,j,n,f;
    cout << "Ovaj program uzima prirodan broj i provjerava dali pripada fibonacijevom nizu i ako pripada ispisuje koji po redu je!" << endl;
    cin >> broj;
	i = 1;
	j = 1;
	n = 2;
	do 
	{
		f = j + i;
		n++;
		i = j;
		j = f;
	} while ( broj > f );
	if ( broj == f ) 
	{
		cout << broj << " je " << n << ". Clan Fibonacijevog Niza";		
	} else
	{
		cout << broj << " Nije clan Fibonacijevog Niza" ;
	}
}