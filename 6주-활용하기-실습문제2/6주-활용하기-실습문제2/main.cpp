//
//  main.cpp
//  6주-활용하기-실습문제2
//
//  Created by Yesolha Lee on 2018. 10. 13..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int star, line;
    
    for(line=1; line<=6; line++)
    {
        for(star=1; star<=line; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
