#include <iostream>

using namespace std;

void charPrn(char ch, int n);

int main()
{
    char ch;
    int n;

    cout << "�ݺ��� ���ڸ� �Է��ϼ��� -> ";
    cin >> ch;
    cout << "�ݺ��� Ƚ���� �Է��ϼ��� -> ";
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

    cout << "������ �Է��Ͻÿ�:";
    num1 = get_integer();
    cout << "������ �Է��Ͻÿ�:";
    num2 = get_integer();
    cout << "������ �Է��Ͻÿ�:";
    num3 = get_integer();

    cout << "���� ū ���� " << get_larger(num1,num2,num3) << " �Դϴ�.";
}

