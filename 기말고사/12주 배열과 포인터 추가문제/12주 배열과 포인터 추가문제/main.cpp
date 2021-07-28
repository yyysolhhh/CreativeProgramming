//
//  main.cpp
//  12주 배열과 포인터 추가문제
//
//  Created by Yesolha Lee on 2018. 12. 11..
//  Copyright © 2018년 Yesolha Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int a[3][4]={{10,20,},{30,40,},{50,60,}};
    int i,j;
    
    for(i=0;i<3;i++)
    {
        a[i][2]=a[i][0]+a[i][1];
        a[i][3]=a[i][2]/2;
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
