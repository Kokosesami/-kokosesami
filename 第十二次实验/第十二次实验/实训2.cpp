#include <iostream> // 包含输入输出接口文件
#include <iomanip> // 包含格式控制头文件
#include <fstream> // 包含对文件进行输入输出的头文件

using namespace std; // 引用标准命名空间

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

void writeStudents(StudentInfo stuList[], int nStudent);
// 申明输出学生信息的函数
void freadStudents(StudentInfo stuList[], int& nStudent, char fileName[]);
// 申明从字节流文件读入学生信息的函数

int main() // 主函数
{
	const int N = 100; // 定义数组长度
	StudentInfo stuList[N + 1] = { 0 }; // 用于存储所有学生信息的结构数组，
	// 下标0不使用，第i位学生的信息存储在下标i处
	int i = 0; // 循环变量
	int n = 0; // 从文件中读取到的学生人数
	char fileName[] = "student.dat";
	freadStudents(stuList, n, fileName); // 调用函数读取学生信息到结构数组
	cout << "从文件读入的学生信息：" << endl;
	writeStudents(stuList, n);
	return 0;
}

void freadStudents(StudentInfo stuList[], int& nStudent, char fileName[])
{
	ifstream fin(fileName, ios::binary); // 打开字节流文件fileName用于读
	nStudent = 0; // 学生数初始化为零
	if (!fin)
	{
		cout << "文件打开失败！" << endl;
		system("pause"); // 等待按任意键后关闭运行窗口
		return; // 返回
	}
	while (!fin.eof()) // 循环读取文件，至读到文件结束为止
	{
		nStudent++; // 当前学生序号增
		fin.read((char*)(stuList + nStudent), sizeof(StudentInfo));
		if (strlen(stuList[nStudent].name) < 1)
		{ // 如果读入的学生姓名为空，则忽略之
			nStudent--;
		}
	}
	fin.close(); // 关闭输入文件
}

void writeStudents(StudentInfo stuList[], int nStudent)
{
	int i = 0;
	cout << " |-----学号-----|-------姓名-------|"
		<< "-----生日------|-性别-|-身高-|-体重-|" << endl;
	for (i = 1; i <= nStudent; i++)
	{
		cout.setf(ios::left); // 设置内容左对齐
		cout.fill(' '); // 位数不足时，以空格填充
		cout << showpoint; // 输出浮点数时显示小数点
		cout << setprecision(3); // 输出浮点数时精度为位有效数字
		cout << " | ";
		cout << setw(13) << stuList[i].no << "| ";
		cout << setw(17) << stuList[i].name << "| ";
		cout.setf(ios::right); // 设置内容右对齐
		cout << setw(4) << stuList[i].birthday.year << "年"
			<< setw(2) << stuList[i].birthday.month << "月"
			<< setw(2) << stuList[i].birthday.day << "日|";
		cout << " " << (stuList[i].sexy == 1 ? " 男 " : " 女 ") << " " << "| ";
		cout << setw(4) << stuList[i].height << " | ";
		cout << setw(4) << stuList[i].weight << " |";
		cout.unsetf(ios::right); // 取消设置内容右对齐
		cout << endl;
	}
	cout << " |--------------|------------------|"
		<< "---------------|------|------|------|" << endl;
	cout << "\t\t共有" << nStudent << " 位学生" << endl;
}