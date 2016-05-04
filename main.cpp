//
//  main.cpp
//  Tutoring_CerosYUnos
//
//  Created by Miguel Bazán on 1/12/16.
//  Copyright © 2016 Miguel Bazán. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[])
{
    string sLinea;
    int iN;
    int iContA = 0, iContB = 0;
    
    cin>> iN;
    
    cin>> sLinea;
    
    for (int iA = 0; iA < iN; iA++)
    {
        if (sLinea[iA] == '1')
        {
            iContA++;
        }
        else
            iContB++;
    }
    
    if (iContA > iContB)
    {
        cout<<iContA - iContB<<endl;
    }
    else
        cout<<iContB-iContA<<endl;
}