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
    cout << "�����������ַ�����" << endl;
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
    }//��5��С��country���ĺ����һ�����룬����Ϊpassword������ַ��Ļ�����˿յ����飬��ԭ���Ĵ����õ�i���ַ�Ϊ/0ֹͣ��ȡ
    cout << "��������" << encodePass << endl;
    cout << "��������" << password << endl;
    return 0;
}//��3��С��z��Z��������������ͬ