#include <iostream>

using namespace std;

void absolute(int *n);

int main()
{
    int a = -10;
    cout << " main�Լ����� ȣ�� �� a�� =" << a << "\n";
    absolute(&a);
    cout << " main�Լ����� ȣ�� �� a�� =" << a << "\n";
    return 0;
}

 void absolute(int *n)
{
    if (*n<=0)
        *n=-1*(*n);
}
