#include <iostream>
using namespace std; 
int main()
{
	int nChoice;
	char Choice,a;
	do
	{
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "\t\t|---------------学生选课系统(学生版)------------|\n";
		cout << "\t\t|   0. 返回                                     |\n";
		cout << "\t\t|   1. 学生信息管理                             |\n";
		cout << "\t\t|   2. 教师信息管理                             |\n";
		cout << "\t\t|   3. 课程信息管理                             |\n";
		cout << "\t\t|   4. 学生选课管理                             |\n";
		cout << "\t\t|   5. 学生成绩管理                             |\n";
		cout << "\t\t|   6. 信息统计模块                             |\n";
		cout << "\t\t|-----------------------------------------------|\n\n";
		cout << "\t\t\t请输入模块编号(0-6):";
		cin >> Choice;
		while (Choice < '0' || Choice>'6')
		{
			cout << "\n输入数据有误，请重新输入(0~6)：";
			cin >> Choice;
		}
		nChoice = Choice - '0';
		switch (nChoice)
		{
			case 0:cout << "\t\t|   0. 返回                                     |" << endl;
				break;
			case 1:cout << "\t\t|   1. 学生信息管理                             |" << endl;
				break;
			case 2:cout << "\t\t|   2. 教师信息管理                             |" << endl;
				break;
			case 3:cout << "\t\t|   3. 课程信息管理                             |" << endl;
				break;
			case 4:cout << "\t\t|   4. 学生选课管理                             |" << endl;
				break;
			case 5:cout << "\t\t|   5. 学生成绩管理                             |" << endl;
				break;
			case 6:cout << "\t\t|   6. 信息统计模块                             |" << endl;
				break;
			default:
				break;
		}
		if (nChoice!=0)
		{
			cout << "输入任意以返回上一菜单..." << endl;
			cin >> a;
		}
	} while (Choice != '0');
	return 0;
}