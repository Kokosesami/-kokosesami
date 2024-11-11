#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char password[20];
    char encodePass[20] = "";
    char ch;
    int i;
    int num;
    cout << "请输入密文字符串：" << endl;
    cin >> encodePass;
    for (i = 0; encodePass[i] != '\0'; i++)
    {
        ch = encodePass[i];
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a' + 1;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            num = ch - 'A' + 27;
        }
        else
        {
            password[i] = ch;
            continue;
        }
        while (num % 3 != 0)
        {
            num = num + 52;
        }
        num = num / 3;
        if (num == 0)
        {
            num = 52;
        }
        if (num <= 26)
        {
            ch = 'a' + num - 1;
        }
        else
        {
            ch = 'A' + num - 27;
        }
        password[i] = ch;
    }//第5）小问country明文后多了一串乱码，是因为password除输出字符的还输出了空的数组，而原来的代码让第i个字符为/0停止读取
    cout << "密码密文" << encodePass << endl;
    cout << "密码明文" << password << endl;
    return 0;
}//第3）小问z、Z的明文与密文相同