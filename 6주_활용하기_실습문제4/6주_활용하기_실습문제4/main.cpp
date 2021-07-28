//
//  main.cpp
//  6주_활용하기_실습문제4
//
//  Created by Yesolha Lee on 2018. 10. 19..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    char s;
    
    while(s!='0')
    {
        cout << "문자를 입력하세요:";
        cin >> s;
        
        switch(s)
        {
            case '0': cout << "EXIT"; break;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z': cout << "OK!\n"; break;
            default : cout << "NG!\n";
        }
    }
    return 0;
}
