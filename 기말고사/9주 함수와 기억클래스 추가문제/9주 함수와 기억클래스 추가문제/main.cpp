//
//  main.cpp
//  9주 함수와 기억클래스 추가문제
//
//  Created by Yesolha Lee on 2018. 12. 11..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int m(int a, int b)
{
    return a-b;
}

void gop(int a, int b)
{
    cout << "두 수의 곱셈값은 " << a*b << "입니다.\n";
}

void nanugi(int a, int b)
{
    cout << "두 수의 나눗셈값은 " << a/b << "입니다.\n";
}

int main()
{
    int num1,num2;
    cout << "첫번째 숫자를 입력하세요:";
    cin >> num1;
    cout << "두번째 숫자를 입력하세요:";
    cin >> num2;
    
    int p = add(num1,num2);
    //int m = minus(num1,num2);
    
    cout << "두 수의 덧셈값은 " << p << "입니다.\n";
    cout << "두 수의 뺄셈값은 " << m(num1,num2) << "입니다.\n";
    gop(num1,num2);
    nanugi(num1,num2);

    return 0;
}
