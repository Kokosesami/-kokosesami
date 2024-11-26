#include<iostream>
#include"Menu.h"
using namespace std;

int main() 
{
    int choice;
    showMenu(); // 显示菜单
    cin >> choice;

    switch (choice) 
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
        {
            int year;
            cout << "请输入年份：";
            cin >> year;
            break;
        }
        case 0:
            cout << "程序已退出，谢谢使用！" << endl;
            break;
        default:
            cout << "无效选项，请重新选择！" << endl;
            break;
    }
    return 0;
}