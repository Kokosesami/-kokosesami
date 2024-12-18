#include <iostream> // ������������ӿ��ļ�
#include <fstream> // �������ļ��������������ͷ�ļ�
using namespace std; // ���ñ�׼�����ռ�

struct Date // ������������
{
	int year; // ��
	int month; // ��
	int day; // ��
};
struct StudentInfo // ����ѧ����Ϣ�ṹ������
{
	char no[20]; // ѧ��
	char name[20]; // ����
	char password[20]; // ����
	int sexy; // �Ա�1Ϊ�У�0ΪŮ��
	double height; // ���
	double weight; // ����
	char telephone[20]; // �绰
	char e_mail[40]; // E_mail
	char qq[20]; // QQ��
	Date birthday; // ����
};

void filesave();//������ʼ������ѧ����Ϣ�ĺ���
void writeStudent(StudentInfo& stu); // �������ѧ����Ϣ�ĺ���
void freadStudents(StudentInfo stuList[], int& nStudent, char fileName[]);
// �������ֽ����ļ�����ѧ����Ϣ�ĺ���

int main() // ������
{
	filesave();

	const int N = 100; // �������鳤��
	StudentInfo stuList[N + 1] = { 0 }; // ���ڴ洢����ѧ����Ϣ�Ľṹ���飬
	// �±�0��ʹ�ã���iλѧ������Ϣ�洢���±�i��
	int i = 0; // ѭ������
	int n = 0; // ���ļ��ж�ȡ����ѧ������
	char filename[20] = "student.dat";
	freadStudents(stuList, n, filename);// ���ú�����ȡѧ����Ϣ���ṹ����
	cout << "���ļ������ѧ����Ϣ��" << endl;
	for (i = 1; i <= n; i++) // �������ѧ����Ϣ
	{
		cout << "��" << i << " λѧ����" << endl;
		writeStudent(stuList[i]); // �����iλѧ������Ϣ
	}
	return 0;
}
void freadStudents(StudentInfo stuList[], int& nStudent, char fileName[])
{
	ifstream fin(fileName, ios::binary); // ���ֽ����ļ�fileName���ڶ�
	nStudent = 0; // ѧ������ʼ��Ϊ��
	if (!fin)
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		system("pause"); // �ȴ����������ر����д���
		return; // ����
	}
	while (!fin.eof()) // ѭ����ȡ�ļ����������ļ�����Ϊֹ
	{
		nStudent++; // ��ǰѧ�������
		fin.read((char*)(stuList + nStudent), sizeof(StudentInfo));
		if (strlen(stuList[nStudent].name) < 1)
		{ // ��������ѧ������Ϊ�գ������֮
			nStudent--;
		}
	}
	fin.close(); // �ر������ļ�
}
void writeStudent(StudentInfo& stu)
{ // ���ѧ����Ϣ
	cout << " ������\t\t" << stu.name << endl;
	cout << " ѧ�ţ�\t\t" << stu.no << endl;
	cout << " �Ա�\t\t" << (stu.sexy == 1 ? "��" : "Ů") << endl;
	cout << " ���գ�\t\t" << stu.birthday.year << "��"
		<< stu.birthday.month << "��" << stu.birthday.day << "��" << endl;
	cout << " ��ߣ�\t\t" << stu.height << endl;
	cout << " ���أ�\t\t" << stu.weight << endl;
	cout << " �绰��\t\t" << stu.telephone << endl;
	cout << " E_mail��\t\t" << stu.e_mail << endl;
	cout << " QQ�ţ�\t\t" << stu.qq << endl;
}

void filesave()
{
	ofstream fout("student.dat", ios::binary | ios::trunc);
	StudentInfo students[5] =
	{
		{"20230001", "����", "123456", 1, 1.75, 70.0, "13800000001", "zhangsan@gmail.com", "123456", {2002, 5, 15}},
		{"20230002", "����", "654321", 0, 1.65, 55.0, "13800000002", "lisi@gmail.com", "234567", {2001, 3, 20}},
		{"20230003", "����", "abcdef", 1, 1.80, 75.0, "13800000003", "wangwu@gmail.com", "345678", {2003, 7, 10}},
		{"20230004", "����", "qwerty", 0, 1.58, 48.0, "13800000004", "zhaoliu@gmail.com", "456789", {2000, 11, 25}},
		{"20230005", "����", "zxcvbn", 1, 1.70, 65.0, "13800000005", "sunqi@gmail.com", "567890", {2002, 1, 5}}
	};
	for (int i = 0; i < 5; i++)
	{
		fout.write((char*)(students + i), sizeof(StudentInfo));
	}
	fout.close();
}
