#include <iostream>

using namespace std;

int main()
{
    char engChar;

    cout << "영문 소문자를 하나 입력해주세요 : ";
    cin >> engChar;

    switch (engChar)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : cout << "입력한 " << engChar << " 는 모음입니다."; break;
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
        case 'z' : cout << "입력한 " << engChar << " 는 자음입니다."; break;
        default : cout << "입력한 " << engChar << " 는 영문 소문자가 아닙니다.";
    }
    return 0;
}
