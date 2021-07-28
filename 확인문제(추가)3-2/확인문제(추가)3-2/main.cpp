//
//  main.cpp
//  확인문제(추가)3-2
//
//  Created by Yesolha Lee on 2018. 10. 13..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,result;
    char sign;
    
    cout << "수식을 입력하시오(예: 3+10)";
    cin >> num1 >> sign >> num2;
    
    switch(sign)
    {
        case '+' : result=num1+num2; break;
        case '-' : result=num1-num2; break;
        case '*' : result=num1*num2; break;
        case '/' : result=num1/num2; break;
        case '%' : result=num1%num2;
    }
    
    cout << num1 << sign << num2 << '=' << result;
    
    return 0;
}
