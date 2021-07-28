//
//  main.cpp
//  최댓값, 최솟값
//
//  Created by Yesolha Lee on 2018. 12. 11..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

void get_min(int x, int y, int z)
{
    int m;
    if(x<y)
        m=x;
    else if(y<z)
        m=y;
    else
        m=z;
    
    cout << "가장 작은 수는 " << m << " 입니다.\n";
}

int get_max(int x, int y, int z)
{
    if(x>y)
        return x;
    else if(y>x)
        return y;
    else
        return z;
}

int main()
{
    int n1,n2,n3;
    
    cout << "정수 3개 입력";
    cin >> n1 >> n2 >> n3;
    
    cout << "가장 큰 수는 " << get_max(n1,n2,n3) << " 입니다.\n";
    get_min(n1,n2,n3);
    
    return 0;
}
