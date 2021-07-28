//
//  main.cpp
//  6주_활용하기_실습문제2-3
//
//  Created by Yesolha Lee on 2018. 10. 18..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int star, line,space=5;
    
    for(line=6; line>=1; line--)
    {
        for(star=1; star<line; star++)
        {
            cout << " ";
        }
        for(star=1; star<=7-line; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
