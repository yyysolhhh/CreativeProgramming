#include <iostream>

using namespace std;

int main()
{
    float num1, num2, plus, minus, multi, divi;

    cout << "ù��° �Ǽ��� �Է��ϼ���. ";
    cin >> num1;
    cout << "�ι�° �Ǽ��� �Է��ϼ���. ";
    cin >> num2;

    plus = num1 + num2;
    minus = num1 - num2;
    multi = num1*num2;
    divi = num1/num2;

    cout << "\n�� �Ǽ��� ���� ����� " << plus << " �Դϴ�.\n";
    cout << "�� �Ǽ��� ���� ����� " << minus << " �Դϴ�.\n";
    cout << "�� �Ǽ��� ���� ����� " << multi << " �Դϴ�.\n";
    cout << "�� �Ǽ��� ������(��) ����� " << divi << " �Դϴ�.\n";

    return 0;
}
