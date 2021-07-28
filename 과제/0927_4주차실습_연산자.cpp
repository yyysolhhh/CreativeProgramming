#include <iostream>

using namespace std;

int main()
{
    int time, minute, second;

    cout << " 시간을 입력하시오(초) : ";
    cin >> time;

    minute = time/60;
    second = time%60;

    cout << " " << time << " 초는 " << minute << " 분 " << second << " 초 입니다.\n";

    return 0;
}
