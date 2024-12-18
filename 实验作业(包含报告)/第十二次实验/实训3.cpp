#include <iostream>
#include <fstream>

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

int fwriteTeacherListToTxtfile(arrTeacher teacherList[], int i);

int main()
{
	const int n = 5;
	arrTeacher teacherList[n] =
	{
		{"T2023001", "����", "password123", 0, {1980, 5, 10}, 1, "����", "��ʦ", "13800000001", "zhangsan@edu.com", "123456"},
		{"T2023002", "����", "password456", 1, {1975, 3, 15}, 1, "˶ʿ", "������", "13800000002", "lisi@edu.com", "123456"},
		{"T2023003", "����", "password789", 0, {1982, 1, 20}, 0, "��ʿ", "����", "13800000003", "wangwu@edu.com", "123456"},
		{"T2023001", "����", "password100", 0, {1990, 7, 11}, 1, "����", "��ʦ", "13800000004", "laoliu@edu.com", "123456" },
		{"T2023001", "����", "password114", 1, {1995, 7, 20}, 1, "����", "��ʦ", "13800000005", "majiaqi@edu.com", "123456"}, 
	};
	ofstream fileclear("fileName.txt", ios::trunc);
	int a = -1;
	if (fileclear)
	{
		fileclear.close();
	}
	for (int i = 0; i < 5; i++)
	{
		a=fwriteTeacherListToTxtfile(teacherList, i);
	}
	if (a==1)
	{
		cout << "��Ϣ����ɹ���" << endl;
	}
	else
	{
		cout << "��Ϣ����ʧ�ܣ�" << endl;
	}
	return 0;
}

int fwriteTeacherListToTxtfile(arrTeacher teacherList[], int i)
{
	ofstream fout("fileName.txt", ios::binary | ios::app);
	if (!fout)
	{
		return 0;
	}
	else
	{	
		fout << "��ʦ���\t" << teacherList[i].no << endl;
		fout << "��ʦ����\t" << teacherList[i].name << endl;
		fout << "����\t" << teacherList[i].password << endl;
		fout << "�û�Ȩ��\t" << teacherList[i].user << endl;
		fout << "����\t" << teacherList[i].birthday.year<<"\t" << teacherList[i].birthday.month <<"\t" << teacherList[i].birthday.day << endl;
		fout << "�Ա�\t" << teacherList[i].sex << endl;
		fout << "ѧ��\t" << teacherList[i].edubkg << endl;
		fout << "ְ��\t" << teacherList[i].eduname << endl;
		fout << "�绰\t" << teacherList[i].telephone << endl;
		fout << "E_mail\t" << teacherList[i].e_mail << endl;
		fout << "QQ\t" << teacherList[i].qq << endl;
		fout.close();
		return 1;
	}
}