//
//  main.cpp
//  6주_활용하기_실습문제8
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "1~30사이의 수를 입력하세요:";
    cin >> num;
    num += 1;
    
    while(num<30)
    {
        if(num%2==0)
        {
            cout << num << endl;
        }
        num++;
    }
    return 0;
}
