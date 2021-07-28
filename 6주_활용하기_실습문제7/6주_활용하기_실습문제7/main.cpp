//
//  main.cpp
//  6주_활용하기_실습문제7
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,total;
    
    cout << "숫자 2개 입력";
    cin >> num1 >> num2;
    total=num1+num2;
    
    if(total%2==0)
    {
        if (total%3==0)
        {
            cout << "두 수의 합이 짝수이고 3의 배수이다.\n";
        }
        else
        {
            cout << "두 수의 합은 짝수이지만 3의 배수는 아니다.\n";
        }
    }
    else
    {
        if(total%3==0)
        {
            cout << "두 수의 합은 홀수이고 3의 배수이다.\n";
        }
        else
        {
            cout << "두 수의 합은 홀수이지만 3의 배수는 아니다.\n";
        }
    }
    cout << total;
    return 0;
}

