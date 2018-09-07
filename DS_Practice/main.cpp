//
//  main.cpp
//  DS_Practice
//
//  Created by Amal Eldick on 9/7/18.
//  Copyright © 2018 Amal Eldick. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int array1[10];
    for(int i = 0; i < 10; i++)
        array1[i] = rand() % 100;
    for(int i = 0; i < 10; i++)
        cout << array1[i] << " ";
    return 0;
}
