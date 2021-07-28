//
//  main.cpp
//  6주-활용하기-실습문제1
//
//  Created by Yesolha Lee on 2018. 10. 13..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float F;
    double C;
    
    cout << "화씨 온도를 입력하시오: ";
    cin >> F;
    
    C=5.0/9.0*(F-32);
    
    cout << "화씨 " << F << "도는 섭씨 " << C << "도 입니다.";
    
    return 0;
}
