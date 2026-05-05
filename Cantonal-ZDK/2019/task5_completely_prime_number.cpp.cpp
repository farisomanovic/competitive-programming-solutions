#include <iostream>
#include <cmath>
using namespace std;

bool prost(int n)
{
    if ( n < 2 )
    {
        return false;
    }
    for ( int i = 2 ; i <= sqrt( n ) ; i++ )
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

main () 
{
    cout << "Program uzima broj i ispisuje jeli prost, potpuno prost ili nije prost." << endl;
    int n, pr, dr, tr, ce, pe, se, sed, os, de, suma, i, j;
    cout << "Unesite broj: ";
    cin >> n;
    if ( prost( n ) )
    {
        pr = n / 100000000;
        dr = ( n % 100000000 ) / 10000000;
        tr = ( n % 10000000 ) / 1000000;
        ce = ( n % 1000000 ) / 100000;
        pe = ( n % 100000 ) / 10000;
        se = ( n % 10000 ) / 1000;
        sed = ( n % 1000 ) / 100;
        os = ( n % 100 ) / 10;
        de = n % 10;
        suma = pr + dr + tr + ce + pe + se + sed + os + de;
        if ( pr != 0 )
        {
            if ( prost( pr ) && prost( dr ) && prost( tr ) && prost( ce ) && prost( pe ) && prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
            {
                cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
            } else 
            {
                cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                return 0;
            }
        } else
        {
            if ( dr != 0 )
            {
                if ( prost( dr ) && prost( tr ) && prost( ce ) && prost( pe ) && prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
                {
                    cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                } else 
                {
                    cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                    return 0;
                }
            } else
            {
                if ( tr != 0 )
                {
                    if ( prost( tr ) && prost( ce ) && prost( pe ) && prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
                    {
                        cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                    } else 
                    {
                        cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                        return 0;
                    }
                } else
                {
                    if ( ce != 0 )
                    {
                        if ( prost( ce ) && prost( pe ) && prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
                        {
                            cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                        } else 
                        {
                            cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                            return 0;
                        }
                    } else
                    {
                        if ( pe != 0 )
                        {
                            if ( prost( pe ) && prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
                            {
                                cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                            } else 
                            {
                                cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                                return 0;
                            }
                        } else
                        {
                            if ( se != 0 )
                            {
                                if ( prost( se ) && prost( sed ) && prost( os ) && prost( de ) )
                                {
                                    cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                                } else 
                                {
                                    cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                                    return 0;
                                }
                            } else
                            {
                                if ( sed != 0 )
                                {
                                    if ( prost( sed ) && prost( os ) && prost( de ) )
                                    {
                                        cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                                    } else 
                                    {
                                        cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                                        return 0;
                                    }
                                } else
                                {
                                    if ( os != 0 )
                                    {
                                        if ( prost( os ) && prost( de ) )
                                        {
                                            cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                                        } else 
                                        {
                                            cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                                            return 0;
                                        }
                                    } else
                                    {
                                        if ( de != 0 )
                                        {
                                            if ( prost( de ) )
                                            {
                                                cout << "Broj " << n << " je potpuno prost broj i suma njegovih cifara je: " << suma;
                                            } else 
                                            {
                                                cout << "Broj " << n << " je prost broj ali ne i potpuno prost broj.";
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else
    {
        cout << "Broj " << n << " nije prost broj.";
        return 0;
    }
}