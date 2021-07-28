//
//  main.cpp
//  6주_활용하기_실습문제5
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    while(1)
    {
        cout << "숫자를 입력하세요:";
        cin >> num;
    
        if(num==0)
        {
            cout << "EXIT";
            break;
        }
        else if(num<0)
        {
            cout << num << "은 음수입니다.\n";
        }
        else if(num%2==0)
        {
            cout << num << "는 짝수입니다.\n";
        }
        else
        {
            cout << num << "은 홀수입니다.\n";
        }
    }
    return 0;
}
