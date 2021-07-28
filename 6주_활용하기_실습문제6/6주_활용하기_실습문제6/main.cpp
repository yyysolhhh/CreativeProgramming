//
//  main.cpp
//  6주_활용하기_실습문제6
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num,div;
    
    cout << "1 이상의 정수 입력:";
    cin >> num;
    
    for(div=1; div<=num; div++)
    {
        if(num%div==0)
        {
            cout << div << endl;
        }
    }
    return 0;
}
