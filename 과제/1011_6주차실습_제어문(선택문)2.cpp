#include <iostream>

using namespace std;

int main()
{
    char engChar;

    cout << "���� �ҹ��ڸ� �ϳ� �Է����ּ��� : ";
    cin >> engChar;

    switch (engChar)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : cout << "�Է��� " << engChar << " �� �����Դϴ�."; break;
        case 'b' :
        case 'c' :
        case 'd' :
        case 'f' :
        case 'g' :
        case 'h' :
        case 'j' :
        case 'k' :
        case 'l' :
        case 'm' :
        case 'n' :
        case 'p' :
        case 'q' :
        case 'r' :
        case 's' :
        case 't' :
        case 'v' :
        case 'w' :
        case 'x' :
        case 'y' :
        case 'z' : cout << "�Է��� " << engChar << " �� �����Դϴ�."; break;
        default : cout << "�Է��� " << engChar << " �� ���� �ҹ��ڰ� �ƴմϴ�.";
    }
    return 0;
}
