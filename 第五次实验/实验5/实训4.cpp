#include<iostream>
using namespace std;
int  main()
{
    char quit = '1';
    do
    {
        system("cls");
        cout << "\n+++++++++++++++++++++++++++++\n";
        cout << "+   +: 加法                 +\n";
        cout << "+   -: 减法                 +\n";
        cout << "+   *: 乘法                 +\n";
        cout << "+   /: 除法                 +\n";
        cout << "+++++++++++++++++++++++++++++\n";
        cout << "请依次输入两个你想运算的数字：\n第一个数：";
        float a, b, c;
        cin >> a;
        cout << "第二个数：";
        cin >> b;
        char symbol = '0';
        do
        {
            cout << "请输入运算符号(+、-、*、/)：";
            cin >> symbol;
            switch (symbol)
            {
            case '+':
                cout << "结果：" << a << " + " << b << " = " << (a + b) << endl;
                break;
            case '-':
                cout << "结果：" << a << " - " << b << " = " << (a - b) << endl;
                break;
            case '*':
                cout << "结果：" << a << " * " << b << " = " << (a * b) << endl;
                break;
            case '/':
                if (b != 0) {
                    cout << "结果：" << a << " / " << b << " = " << (a / b) << endl;
                }
                else {
                    cout << "错误：除数不能为 0！" << endl;
                }
                break;
            default:
                break;
            }
        } while (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/');
        cout << "输入0以退出，输入任意一个字符以返回上一菜单..." << endl;
        cin >> quit;
    } while (quit != '0');
    return 0;
}