//
//  main.cpp
//  6주_활용하기_실습문제4-2
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    char s;
    
    while(1)
    {
        cout << "문자를 입력하세요:";
        cin >> s;
        
        if(s=='0')
        {
            cout << "EXIT";
            break;
        }
        else if(s>='a'&&s<='z')
        {
            cout << "OK!\n";
        }
        else
        {
            cout << "NG!\n";
        }
    }
    return 0;
}
