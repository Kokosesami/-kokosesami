#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};
struct arrTeacher
{
	char no[20];
	char name[20];
	char password[20];
	int user;
	Date birthday;
	int sex;
	char edubkg[20];
	char eduname[20];
	char telephone[20];
	char e_mail[40];
	char qq[20];
};

void freadTeachers(arrTeacher teacherList[], int& n, char fileName[]);
void writeTeachers(arrTeacher teacherList[], int n);

int main()
{
	const int N = 100;
	arrTeacher teacherList[N + 1] = { 0 };
	int n = 0;
	int i = 0;
	char fileName[20] = "fileName.txt";
	freadTeachers(teacherList, n, fileName);
	cout << "从文件读入的教师信息：" << endl;
	writeTeachers(teacherList, n);

	return 0;
}

void freadTeachers(arrTeacher teacherList[], int& n, char fileName[])
{
	ifstream fin(fileName, ios::binary);
	n = 0;
	if (!fin)
	{
		cout << "文件打开失败！" << endl;
		system("pause");
		return;
	}
	char titleName[20] = "";
	char sysbolName[20] = "";
	while (!fin.eof())
	{
		if (strcmp(titleName, "教师编号") != 0)
		{
			n++; // 新增一位教师
			fin >> titleName;
			fin.getline(teacherList[n].no, 20);

			// 姓名
			fin >> titleName;
			fin.getline(teacherList[n].name, 20);

			// 密码
			fin >> titleName;
			fin.getline(teacherList[n].password, 20);

			// 用户权限
			fin >> titleName;
			fin >> teacherList[n].user;

			// 生日
			fin >> titleName;
			fin >> teacherList[n].birthday.year >> teacherList[n].birthday.month >> teacherList[n].birthday.day;

			// 性别
			fin >> titleName;
			fin >> teacherList[n].sex;

			// 学历
			fin >> titleName;
			fin.getline(teacherList[n].edubkg, 20);

			// 职称
			fin >> titleName;
			fin.getline(teacherList[n].eduname, 20);

			// 电话
			fin >> titleName;
			fin.getline(teacherList[n].telephone, 20);

			// E-mail
			fin >> titleName;
			fin.getline(teacherList[n].e_mail, 40);

			// QQ
			fin >> titleName;
			fin.getline(teacherList[n].qq, 20);
		}
	}
	fin.close();
}

void writeTeachers(arrTeacher teacherList[], int n)
{
	int i = 0;
	cout << " |-----工资号-----|--------姓名---------|"
		<< "-----生日------|----权限----|-性别-|--学历--|---职称---|" << endl;
	for (i = 1; i < n; i++)
	{
		cout.setf(ios::left);
		cout.fill(' ');
		cout << showpoint;
		cout << setprecision(3);
		cout << " | ";
		cout << setw(11) << teacherList[i].no << "| ";
		cout << setw(17) << teacherList[i].name << "| ";
		cout.setf(ios::right);// 设置内容右对齐
		cout << setw(4) << teacherList[i].birthday.year << "年"
			<< setw(2) << teacherList[i].birthday.month << "月"
			<< setw(2) << teacherList[i].birthday.day << "日|";
		cout << " " << (teacherList[i].user == 1 ? " 教务员   " : " 普通教师 ") << " " << "| ";
		cout << " " << (teacherList[i].user == 1 ? "男 " : "女 ") << " " << "| ";
		cout << setw(4) << teacherList[i].edubkg << " |";
		cout.fill(' '); // 位数不足时，以空格填充
		cout << setw(4) << teacherList[i].eduname << "\t|";
		cout.unsetf(ios::right); // 取消设置内容右对齐
		cout << endl;
	}
	cout << " |----------------|---------------------|"
		<< "---------------|------------|------|--------|----------|" << endl;
	cout << "\t\t共有" << n-1 << " 位教师" << endl;
}