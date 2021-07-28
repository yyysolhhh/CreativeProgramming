//
//  main.cpp
//  6주_활용하기_실습문제3
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    for(num=1; num<=20; num++)
    {
        if(num%3==0)
        {
            if(num%5==0)
            {
                cout << "THE END";
                break;
            }
            cout << num << " ";
        }
    }
    return 0;
}
