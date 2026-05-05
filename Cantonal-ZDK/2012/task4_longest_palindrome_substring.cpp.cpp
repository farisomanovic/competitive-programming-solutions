#include <iostream>
#include <string>
using namespace std;

bool isPalindrome ( const string& str ) 
{
    int len = str.length();
    for ( int i = 0 ; i < len / 2 ; i++ ) 
    {
        if ( str[i] != str[len - 1 - i] )
        {
            return false;
        }
    }
    return true;
}

string longestPalindrome ( const string& str ) 
{
    int len = str.length();
    string longest = "";
    for ( int i = 0 ; i < len ; i++ ) 
    {
        for ( int j = i ; j < len ; j++ ) 
        {
            string subStr = str.substr(i, j - i + 1);
            if ( isPalindrome(subStr) && subStr.length() > longest.length() ) 
            {
                longest = subStr;
            }
        }
    }
    return longest;
}

int main() 
{
    string word;
    cout << "Unesite rijec: ";
    cin >> word;
    string palindrome = longestPalindrome(word);
    cout << "Najduza podrijec koja je palindrom je: " << palindrome << endl;
    return 0;
}
