#include <iostream>
using namespace std;

int main()
{
    char stuNo[50] = "";                // �����ַ������������ѧ��
    unsigned int i = 0;                 // �����±����
    unsigned int number = 0;            // ���ת����õ�������

    cout << "������ѧ����ѧ��:\t";
    cin >> stuNo;

    while (stuNo[i] != '\0' && stuNo[i] >= '0' && stuNo[i] <= '9') // �����ַ�����ֱ���������ַ����ַ�������
    {
        int k = stuNo[i] - 48;          // ����ֲ�����k����ַ�stuNo[i]��ASCII����ַ�'0'��ASCII��֮��
        number = 10 * number + k;       // ���ַ�ת��Ϊ�������ۼӵ�number��
        i++;
    }

    cout << "ת����������Ϊ: " << number << endl; // ���ת���������
    return 0;                           // �������
}