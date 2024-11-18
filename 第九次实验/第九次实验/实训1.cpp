///**********************************************************
/// 程序名：实训9_1.cpp *
/// 主要功能： *
/// 显示根据选择显示不同的用户登录界面 *
///**********************************************************
#include <iostream>
using namespace std; // 引用标准命名空间
void loginExec(char moudle); // 申明登录菜单执行函数
void studentLogin(); // 申明学生登录函数
void teacherLogin(); // 申明教师登录函数
int main()
{
	char choice;
	// 打开登录菜单
	cout << "\t\t|----------------系统登录-----------------|\n";
	cout << "\t\t|\t 0. 退出 |\n";
	cout << "\t\t|\t 1. 学生登录 |\n";
	cout << "\t\t|\t 2. 教师登录 |\n";
	cout << "\t\t|-----------------------------------------|\n\n";
	cout << "\t\t\t请输入模块编号(0-2):";
	cin >> choice; // 输入选择功能的编号
	if (choice == '0') // 如果输入功能号为零，则退出程序
	{
		return 0;
	}
	else
	{
		loginExec(choice); // 调用登录菜单执行函数
		return 0;
	}
}
///**********************************************************
/// 函数名：loginExec *
/// 输入参数： *
/// moudle：模块编号 *
/// 返回值 *
/// 无 *
/// 函数功能： *
/// 根据模块编号调用相应模块的执行函数 *
///**********************************************************
void loginExec(char moudle) // 登录菜单执行函数
{
switch (moudle)
{
case '0':
	return; // 退出程序
	break;
case '1':
	studentLogin(); // 调用学生登录函数
	break;
case '2':
	teacherLogin(); // 调用教师登录函数
	break;
}
}
void studentLogin() // 定义学生登录函数
{
	cout << "学生登录" << endl;
}
void teacherLogin() // 定义教师登录函数
{
	cout << "教师登录" << endl;
}