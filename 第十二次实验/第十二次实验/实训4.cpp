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
	cout << "���ļ�����Ľ�ʦ��Ϣ��" << endl;
	writeTeachers(teacherList, n);

	return 0;
}

void freadTeachers(arrTeacher teacherList[], int& n, char fileName[])
{
	ifstream fin(fileName, ios::binary);
	n = 0;
	if (!fin)
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		system("pause");
		return;
	}
	char titleName[20] = "";
	char sysbolName[20] = "";
	while (!fin.eof())
	{
		if (strcmp(titleName, "��ʦ���") != 0)
		{
			n++; // ����һλ��ʦ
			fin >> titleName;
			fin.getline(teacherList[n].no, 20);

			// ����
			fin >> titleName;
			fin.getline(teacherList[n].name, 20);

			// ����
			fin >> titleName;
			fin.getline(teacherList[n].password, 20);

			// �û�Ȩ��
			fin >> titleName;
			fin >> teacherList[n].user;

			// ����
			fin >> titleName;
			fin >> teacherList[n].birthday.year >> teacherList[n].birthday.month >> teacherList[n].birthday.day;

			// �Ա�
			fin >> titleName;
			fin >> teacherList[n].sex;

			// ѧ��
			fin >> titleName;
			fin.getline(teacherList[n].edubkg, 20);

			// ְ��
			fin >> titleName;
			fin.getline(teacherList[n].eduname, 20);

			// �绰
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
	cout << " |-----���ʺ�-----|--------����---------|"
		<< "-----����------|----Ȩ��----|-�Ա�-|--ѧ��--|---ְ��---|" << endl;
	for (i = 1; i < n; i++)
	{
		cout.setf(ios::left);
		cout.fill(' ');
		cout << showpoint;
		cout << setprecision(3);
		cout << " | ";
		cout << setw(11) << teacherList[i].no << "| ";
		cout << setw(17) << teacherList[i].name << "| ";
		cout.setf(ios::right);// ���������Ҷ���
		cout << setw(4) << teacherList[i].birthday.year << "��"
			<< setw(2) << teacherList[i].birthday.month << "��"
			<< setw(2) << teacherList[i].birthday.day << "��|";
		cout << " " << (teacherList[i].user == 1 ? " ����Ա   " : " ��ͨ��ʦ ") << " " << "| ";
		cout << " " << (teacherList[i].user == 1 ? "�� " : "Ů ") << " " << "| ";
		cout << setw(4) << teacherList[i].edubkg << " |";
		cout.fill(' '); // λ������ʱ���Կո����
		cout << setw(4) << teacherList[i].eduname << "\t|";
		cout.unsetf(ios::right); // ȡ�����������Ҷ���
		cout << endl;
	}
	cout << " |----------------|---------------------|"
		<< "---------------|------------|------|--------|----------|" << endl;
	cout << "\t\t����" << n-1 << " λ��ʦ" << endl;
}