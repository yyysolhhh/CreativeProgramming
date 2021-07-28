#include <iostream>

using namespace std;

void absolute(int *n);

int main()
{
    int a = -10;
    cout << " main함수에서 호출 전 a값 =" << a << "\n";
    absolute(&a);
    cout << " main함수에서 호출 후 a값 =" << a << "\n";
    return 0;
}

 void absolute(int *n)
{
    if (*n<=0)
        *n=-1*(*n);
}
