
/*
 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef IsUnique_h
#define IsUnique_h


int IsUnique()
{
    string str;
    cout << "enter a string";
    getline(cin, str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == str[i+1])
            cout << "match " << str[i];
    }
    return 0;
}

#endif /* IsUnique_h */
