#include <iostream>
using namespace std;

main () 
{
    cout << "Program uzima broj n i nalazi najblizi prost broj koji ima najmanje 2 iste cifre." << endl;
    int broj,i,j,najbliziv,najblizim,v=0,m=0,kojiv,kojim,niz[32767],pr,dr,tr,ce,pe;
    cout << "Unesite broj: ";
    cin >> broj;
    if ( broj > 32767 || broj < 1 )
    {
        cout << "Unijeli ste broj koji nije u opsegu od 1 do 32767.";
        return 1;
    }
    for ( i = 0 ; i <= 32767 ; i++ )
    {
        niz [i] = i;
    }
    for ( i = 2 ; i <= 32767 ; i++ )
    {
        for ( j = i * 2 ; j <=32767 ; j += i )
        {
            niz[j] = 0;
        }
    }
    pr = broj / 10000;
    dr = ( broj % 10000 ) / 1000;
    tr = ( broj % 1000 ) / 100;
    ce = ( broj % 100 ) / 10;
    pe = broj % 10;
    if ( pr == 0 )
    {
        pr = -1;
        if ( dr == 0 )
        {
            dr = -2;
            if ( tr == 0 )
            {
                tr = -3;
                if ( ce == 0 )
                {
                    ce = -4;
                }
            }
        }
    }
    if ( ( broj == niz[broj] ) && ( pr == dr || pr == tr || pr == ce || pr == pe || dr == tr || dr == ce || dr == pe || tr == ce || tr == pe || ce == pe ) )
    {   
        cout << "Najblizi prost broj koji ima najmanje dvije iste cifre broju " << broj << " je on sam sebi.";
    } else
    {
        for ( i = broj ; i <= 32767 ; i++ )
        {
            if ( niz[i] != 0 )
            {
                pr = i / 10000;
                dr = ( i % 10000 ) / 1000;
                tr = ( i % 1000 ) / 100;
                ce = ( i % 100 ) / 10;
                pe = i % 10;
                if ( pr == 0 )
                {
                    pr = -1;
                    if ( dr == 0 )
                    {
                        dr = -2;
                        if ( tr == 0 )
                        {
                            tr = -3;
                            if ( ce == 0 )
                            {
                                ce = -4;
                            }
                        }
                    }
                }
                if ( pr == dr || pr == tr || pr == ce || pr == pe || dr == tr || dr == ce || dr == pe || tr == ce || tr == pe || ce == pe )
                {
                    kojiv = niz[i];
                    break;
                } else
                {
                    v++;
                }
            } else
            {
                v++;
            }
        }
        for ( i = broj ; i >= 1 ; i-- )
        {
            if ( niz[i] != 0 )
            {
                pr = i / 10000;
                dr = ( i % 10000 ) / 1000;
                tr = ( i % 1000 ) / 100;
                ce = ( i % 100 ) / 10;
                pe = i % 10;
                if ( pr == 0 )
                {
                    pr = -1;
                    if ( dr == 0 )
                    {
                        dr = -2;
                        if ( tr == 0 )
                        {
                            tr = -3;
                            if ( ce == 0 )
                            {
                                ce = -4;
                            }
                        }
                    }
                }
                if ( pr == dr || pr == tr || pr == ce || pr == pe || dr == tr || dr == ce || dr == pe || tr == ce || tr == pe || ce == pe )
                {
                    kojim = niz[i];
                    break;
                } else
                {
                    m++;
                }
            } else
            {
                m++;
            }
        }
        if ( m == v )
        {
            cout << "Najblizi prosti brojevi koji imaju najmanje 2 iste cifre broju " << broj << " su brojevi " << kojim << " i " << kojiv;
        } else
        {
            if ( v < m ) 
            {
                cout << "Najblizi prosti broj koji ima najmanje 2 iste cifre broju " << broj << " je broj " << kojiv;
            } else
            {
                cout << "Najblizi prosti broj koji ima najmanje 2 iste cifre broju " << broj << " je broj " << kojim;
            }
        }
    }
}