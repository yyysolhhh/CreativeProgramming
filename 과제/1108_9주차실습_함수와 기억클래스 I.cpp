#include <iostream>

using namespace std;

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
    int number; //�Է¹��� ���� ����

    cout << "������ �Է��Ͻÿ�:";
    cin >> number; //����ڷκ��� �� �Է¹ޱ�

    //�Լ� ȣ���ϱ�~
    int evenValue = even(number); //even�Լ� ȣ�� + �� �޾ƿ���
    int absValue = absolute(number); //absolute �Լ� ȣ�� + �� �޾ƿ���
    int signValue = sign(number); //sign�Լ� ȣ�� + �� �޾ƿ���

    //evenValue�� ������ ¦��/Ȧ�� �����Ͽ� ����ϱ�
    if(evenValue)
    {
        cout << "�־��� ������ ¦���Դϴ�.\n";
    }
    else
    {
        cout << "�־��� ������ Ȧ���Դϴ�.\n";
    }

    //absValue�� ������ ���밪 ����ϱ�
    cout <<"�־��� ������ ���밪�� "<< absValue <<" �Դϴ�.\n";

    //signValue�� ������ ����/���/0 �����Ͽ� ����ϱ�
    if(signValue==-1)
    {
        cout << "�־��� ������ �����Դϴ�.\n";
    }
    else if(signValue==1)
    {
        cout << "�־��� ������ ����Դϴ�.\n";
    }
    else
    {
        cout << "�־��� ������ 0�Դϴ�.\n";
    }
    return 0;
}

int even(int n)
{
    if (n%2 == 0)
        return 1; //¦���̸� 1��ȯ
    else
        return 0; //Ȧ���̸� 0��ȯ
}

int absolute(int n)
{
    if(n>=0)
        return n; //����̸� �״�� ��ȯ
    else
        return -1*n; //�����̸� (-1)���ؼ� ��ȯ
}

int sign(int n)
{
    if(n<0)
        return -1; //�����̸� -1��ȯ
    else if(n>0)
        return 1; //����̸� 1��ȯ
    else
        return 0; //0�̸� 0��ȯ
}
