#include<iostream>
using namespace std;
int  main()
{
    char quit = '1';
    do
    {
        system("cls");
        cout << "\n+++++++++++++++++++++++++++++\n";
        cout << "+   +: �ӷ�                 +\n";
        cout << "+   -: ����                 +\n";
        cout << "+   *: �˷�                 +\n";
        cout << "+   /: ����                 +\n";
        cout << "+++++++++++++++++++++++++++++\n";
        cout << "��������������������������֣�\n��һ������";
        float a, b, c;
        cin >> a;
        cout << "�ڶ�������";
        cin >> b;
        char symbol = '0';
        do
        {
            cout << "�������������(+��-��*��/)��";
            cin >> symbol;
            switch (symbol)
            {
            case '+':
                cout << "�����" << a << " + " << b << " = " << (a + b) << endl;
                break;
            case '-':
                cout << "�����" << a << " - " << b << " = " << (a - b) << endl;
                break;
            case '*':
                cout << "�����" << a << " * " << b << " = " << (a * b) << endl;
                break;
            case '/':
                if (b != 0) {
                    cout << "�����" << a << " / " << b << " = " << (a / b) << endl;
                }
                else {
                    cout << "���󣺳�������Ϊ 0��" << endl;
                }
                break;
            default:
                break;
            }
        } while (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/');
        cout << "����0���˳�����������һ���ַ��Է�����һ�˵�..." << endl;
        cin >> quit;
    } while (quit != '0');
    return 0;
}