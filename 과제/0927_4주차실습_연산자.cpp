#include <iostream>

using namespace std;

int main()
{
    int time, minute, second;

    cout << " �ð��� �Է��Ͻÿ�(��) : ";
    cin >> time;

    minute = time/60;
    second = time%60;

    cout << " " << time << " �ʴ� " << minute << " �� " << second << " �� �Դϴ�.\n";

    return 0;
}
