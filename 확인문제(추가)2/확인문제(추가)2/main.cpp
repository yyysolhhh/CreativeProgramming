//
//  main.cpp
//  확인문제(추가)2
//
//  Created by Yesolha Lee on 2018. 10. 13..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout << "첫번째 값을 입력하세요 : ";
    cin >> num1;
    cout << "두번째 값을 입력하세요 : ";
    cin >> num2;
    
    switch(num1-num2>0)
    {
        case 1 : cout << num1 << "-" << num2 << "=" << num1-num2; break;
        case 0 : cout << num2 << "-" << num1 << "=" << num2-num1;
    }
    
    if (num1 - num2 > 0)
        cout << num1 << "-" << num2 << "=" << num1-num2;
    else
        cout << num2 << "-" << num1 << "=" << num2-num1;
    
    return 0;
}
