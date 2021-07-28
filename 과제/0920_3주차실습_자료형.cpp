#include <iostream>

using namespace std;

int main()
{
    float num1, num2, plus, minus, multi, divi;

    cout << "첫번째 실수를 입력하세요. ";
    cin >> num1;
    cout << "두번째 실수를 입력하세요. ";
    cin >> num2;

    plus = num1 + num2;
    minus = num1 - num2;
    multi = num1*num2;
    divi = num1/num2;

    cout << "\n두 실수의 덧셈 결과는 " << plus << " 입니다.\n";
    cout << "두 실수의 뺄셈 결과는 " << minus << " 입니다.\n";
    cout << "두 실수의 곱셈 결과는 " << multi << " 입니다.\n";
    cout << "두 실수의 나눗셈(몫) 결과는 " << divi << " 입니다.\n";

    return 0;
}
