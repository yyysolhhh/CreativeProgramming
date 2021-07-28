#include <iostream>

using namespace std;

int main()
{
    char inputChar;


    cout << "문자를 입력하세요:";
    cin >> inputChar;


    if(inputChar>='A'&&inputChar<='Z')
    {
        cout << "입력한 문자 " << inputChar << "는 대문자입니다.";
    }

    else if(inputChar>='a'&&inputChar<='z')
    {
        cout << "입력한 문자 " << inputChar << "는 소문자입니다.";
    }

    else if(inputChar>='0'&&inputChar<='9')
    {
        cout << "입력한 문자 " << inputChar << "는 숫자입니다.";
    }

    else
    {
        cout << "입력한 문자 " << inputChar << "는 기타 문자입니다.";
    }


    return 0;
}
