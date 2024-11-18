///**********************************************************
/// 程序名：实训9_2.cpp *
/// 功能 *
/// 输出一个学生的信息 *
///**********************************************************
#include <iostream>
using namespace std;
const int MAX_SIZE = 50; // 最多学生人数
struct Date // 定义日期类型
{
	int year; // 年
	int month; // 月
	int day; // 日
};
struct StudentInfo // 定义学生信息结构体类型
{
	char no[20]; // 学号
	char name[20]; // 姓名
	char password[20]; // 密码
	int sexy; // 性别（1为男，0为女）
	double height; // 身高
	double weight; // 体重
	char telephone[20]; // 电话
	char e_mail[40]; // E_mail
	char qq[20]; // QQ号
	Date birthday; // 生日
};
struct StudentList // 学生信息表结构体类型
{
	StudentInfo data[MAX_SIZE]; // 存储学生信息的数组
	int length; // 学生人数
};
void writeStudent(StudentInfo &stu); // 函数申明
int main()
{
	const int nStudent = 5;
	StudentList stuList = 
	{
		{
			{""}, // 定义学生信息表并初始化
			{"2013141442001", "赵小一", "123456", 1, 1.70, 70.0,"13612345678", "", "", {1995,1,1}},
			{"2013141442002", "钱小二", "123456", 0, 1.60, 50.0,"13623456781", "", "", {1995,2,2}},
			{"2013141442003", "孙小三", "123456", 1, 1.72, 71.0,"13634567812", "", "", {1995,3,3}},
			{"2013141442004", "李小四", "123456", 0, 1.64, 60.0,"13645678123", "", "", {1995,4,4}},
			{"2013141442005", "周小五", "123456", 1, 1.78, 75.0,"13656781234", "", "", {1995,5,5}}
		},nStudent
	};
	int nIndex = 0; // 要输出信息的学生序号
	cout << "请输入学生的序号(1～" << nStudent << ")：";
	cin >> nIndex;
	if (nIndex < 1 || nIndex > nStudent)
	{
		cout << "你所输入的学生序号超界！" << endl;
		return 1;
	}
	cout << "你选择的学生信息如下：" << endl;
	writeStudent(stuList.data[nIndex]);
	return 0;
}
///**********************************************************
/// 函数名：writeStudent *
/// 输入参数 *
/// stu 学生信息结构体 *
/// 返回值 *
/// 无 *
/// 函数功能： *
/// 打印输出某同学所有信息 *
///**********************************************************
void writeStudent(StudentInfo &stu)
{
	cout << " 姓名：\t\t" << stu.name << endl;
	cout << " 学号：\t\t" << stu.no << endl;
	cout << " 性别：\t\t" << (stu.sexy == 1 ? "男" : "女") << endl;
	cout << " 生日：\t\t" << stu.birthday.year << "年"
		<< stu.birthday.month << "月" << stu.birthday.day << "日" << endl;
	cout << " 身高：\t\t" << stu.height << endl;
	cout << " 体重：\t\t" << stu.weight << endl;
	cout << " 电话：\t\t" << stu.telephone << endl;
	cout << " E_mail：\t\t" << stu.e_mail << endl;
	cout << " QQ号：\t\t" << stu.qq << endl;
}