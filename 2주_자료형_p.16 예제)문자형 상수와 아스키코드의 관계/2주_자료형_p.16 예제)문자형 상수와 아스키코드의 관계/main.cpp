//
//  main.cpp
//  2주_자료형_p.16 예제)문자형 상수와 아스키코드의 관계
//
//  Created by Yesolha Lee on 2018. 10. 24..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    cout << (char)('a'-32) <<" ";
    cout << (int) 'A' << "\n";
    cout << 'a' <<" ";
    cout << (int) 'a' << "\n";
    cout << '0' <<" ";
    cout << (int) '0' << "\n";
    cout << "------------------------\n";
    cout << 'A'+1 << "\t";
    cout << (char) ('A'+1) << "\n";
    
    return 0;
}
