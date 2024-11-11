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
            cout << "变量的值溢出" << endl;
            break;
        }
    }
    cout << "a的值为" << a << endl;
    return 0;
}