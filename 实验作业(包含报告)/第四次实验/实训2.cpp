#include <iostream>
using namespace std;

int main()
{
    long long a = 1, b = 1, counter = 0;
    for (counter = 0; counter < 1000; counter++)
    {
        a = a * a + b;
        b = a + b * b;
        if (a < 0||b<0)
        {
            cout << "������ֵ���" << endl;
            break;
        }
    }
    cout << "a��ֵΪ" << a << endl;
    return 0;
}