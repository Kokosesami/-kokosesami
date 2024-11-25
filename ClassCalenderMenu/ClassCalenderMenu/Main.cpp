#include<iostream>
using namespace std;

void showMenu()
{
    cout << "\n===============================" << endl;
    cout << "|        万年历查询程序       |" << endl;
    cout << "===============================" << endl;
    cout << "| 1. 计算日期                |" << endl;
    cout << "| 2. 公历转农历              |" << endl;
    cout << "| 3. 农历节气查询年份        |" << endl;
    cout << "| 0. 退出程序                |" << endl;
    cout << "===============================" << endl;
    cout << "请输入选项: ";
}
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