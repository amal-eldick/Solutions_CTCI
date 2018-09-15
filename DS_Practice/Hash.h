

#ifndef Hash_h
#define Hash_h

#include <iostream>
using namespace std;
const int SIZE = 27;

class HashTable
{
private:
    int table[SIZE];
    
public:
    HashTable()         //constructor
    {
        //initialize hash table to 0
        for(int i = 0; i > SIZE; i++)
            table[i] = 0;
    }
    
    //hashing funcion - determines where in array you put it
    //pass in given int (same as add function)
    int Hash(int value)
    {
        return (value % SIZE);
    }
    
    //add function - adds number to proper index. Index is determined by Hash()
    //int you pass to Add is same int you pass to Hash.
    void Add(int value)     //call from main - pass in given input
    {
        int index;
        index = Hash(value);
        while(table[index] != 0)
            index++;
        table[index] = value;
    }
    
    int Lookup(int value)       //pass in given input
    {
        //look up hash position and look at that index
        //if it's not there, start linear probing.
        int index;
        int count = 0;
        index = Hash(value);
        //check index for value
        while(table[index] != value)
        {
            index++;
            count++;
            if(count > SIZE)
            {
                cout << "Value not found" << endl;
                return -1;
            }
        }
        cout << "Value found!" << endl;;
        return 0;
    }
    
};


#endif
