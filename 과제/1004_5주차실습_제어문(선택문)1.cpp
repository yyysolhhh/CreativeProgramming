#include <iostream>

using namespace std;

int main()
{
    char inputChar;


    cout << "���ڸ� �Է��ϼ���:";
    cin >> inputChar;


    if(inputChar>='A'&&inputChar<='Z')
    {
        cout << "�Է��� ���� " << inputChar << "�� �빮���Դϴ�.";
    }

    else if(inputChar>='a'&&inputChar<='z')
    {
        cout << "�Է��� ���� " << inputChar << "�� �ҹ����Դϴ�.";
    }

    else if(inputChar>='0'&&inputChar<='9')
    {
        cout << "�Է��� ���� " << inputChar << "�� �����Դϴ�.";
    }

    else
    {
        cout << "�Է��� ���� " << inputChar << "�� ��Ÿ �����Դϴ�.";
    }


    return 0;
}
