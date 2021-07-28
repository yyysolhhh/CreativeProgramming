#include <iostream>

using namespace std;

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
    int number; //입력받을 변수 선언

    cout << "정수를 입력하시오:";
    cin >> number; //사용자로부터 값 입력받기

    //함수 호출하기~
    int evenValue = even(number); //even함수 호출 + 값 받아오기
    int absValue = absolute(number); //absolute 함수 호출 + 값 받아오기
    int signValue = sign(number); //sign함수 호출 + 값 받아오기

    //evenValue의 값으로 짝수/홀수 구분하여 출력하기
    if(evenValue)
    {
        cout << "주어진 정수는 짝수입니다.\n";
    }
    else
    {
        cout << "주어진 정수는 홀수입니다.\n";
    }

    //absValue의 값으로 절대값 출력하기
    cout <<"주어진 정수의 절대값은 "<< absValue <<" 입니다.\n";

    //signValue의 값으로 음수/양수/0 구분하여 출력하기
    if(signValue==-1)
    {
        cout << "주어진 정수는 음수입니다.\n";
    }
    else if(signValue==1)
    {
        cout << "주어진 정수는 양수입니다.\n";
    }
    else
    {
        cout << "주어진 정수는 0입니다.\n";
    }
    return 0;
}

int even(int n)
{
    if (n%2 == 0)
        return 1; //짝수이면 1반환
    else
        return 0; //홀수이면 0반환
}

int absolute(int n)
{
    if(n>=0)
        return n; //양수이면 그대로 반환
    else
        return -1*n; //음수이면 (-1)곱해서 반환
}

int sign(int n)
{
    if(n<0)
        return -1; //음수이면 -1반환
    else if(n>0)
        return 1; //양수이면 1반환
    else
        return 0; //0이면 0반환
}
