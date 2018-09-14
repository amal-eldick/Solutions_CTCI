/*
 Write a method to replace all spaces in a string with '%20: You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: If implementing in Java, please use a character array so that you can perform this operation in place.)
 */
#ifndef URL_h
#define URL_h
#include <string>

void URL()
{
    string URL = "hello world yay";
    string thing = "%20";
    
    for(int i = 0; i < URL.length(); i++)
    {
        if(URL[i] == ' ')
        {
            URL.erase(i,1);
            URL.insert(i, thing);
        }
        
    }
    cout << "new string is " << URL << endl;
}


#endif /* URL_h */
