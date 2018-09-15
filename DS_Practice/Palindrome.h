/*
 Palindromeome Permutation: Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters.The palindrome does not need to be limited to just dictionary words.
 */

#ifndef Palindrome
#define Palindrome
#include <Hash.h>

int Palindrome()
{
    hash = HashTable();
    string possible = "cattac";
    
    //save chars to hash table
    for(int i = 0; i < possible.length(); i++)
    {
        if(possible[i] != ' ')
            H.Add(Possible[i]);
    }
    
}

#endif 
