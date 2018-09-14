/*
 Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef Permutation_h
#define Permutation_h

int Permutation()
{
    string str1, str2;
    int count = 0;
    cout << "enter first string";
    getline(cin, str1);
    cout << "enter second string";
    getline(cin, str2);
    
    if(str1.length() != str2.length())
    {
        cout << "not permutations";
        return 0;
    }
    
    for(int a = 0; a < str1.length(); a++){
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] == str2[i+a])
            count++;
    }
    }
    if(count == str1.length())
        cout << "permutation.";
    else
        cout << "not permutation";
    
    
    return 0;
}


#endif /* Permutation_h */
