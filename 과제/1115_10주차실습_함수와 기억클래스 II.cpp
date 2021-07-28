#include <iostream>

using namespace std;

void charPrn(char ch, int n);

int main()
{
    char ch;
    int n;

    cout << "반복할 문자를 입력하세요 -> ";
    cin >> ch;
    cout << "반복할 횟수를 입력하세요 -> ";
    cin >> n;

    charPrn(ch,n);
}

void charPrn(char ch, int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout << ch;
    }
}

//------------------------------

#include <iostream>

using namespace std;

int get_integer()
{
    int n;
    cin >> n;
    return n;
}

int get_larger(int x, int y, int z)
{
    if(x>y&&x>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int num1, num2, num3;

    cout << "정수를 입력하시오:";
    num1 = get_integer();
    cout << "정수를 입력하시오:";
    num2 = get_integer();
    cout << "정수를 입력하시오:";
    num3 = get_integer();

    cout << "가장 큰 수는 " << get_larger(num1,num2,num3) << " 입니다.";
}

