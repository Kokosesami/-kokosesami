#include<iostream>
using namespace std;
struct Date
{
    int year;  // ��
    int month; // ��
    int day;   // ��
};

struct StudentInfo
{
    char no[20];        // ѧ��
    char name[20];      // ����
    char password[20];  // ����
    int sexy;           // �Ա�1Ϊ�У�0ΪŮ��
    double height;      // ���
    double weight;      // ����
    char telephone[20]; // �绰
    char e_mail[40];     // E-mail
    char qq[20];        // QQ��
    Date birthday;      // ����
};

void AgeOrder(StudentInfo *stu);
void writeStudent(StudentInfo stu);

int main()
{
    const int nStudent = 5;
     StudentInfo stuList[nStudent+1] =//ѧ����Ϣ��ʼ��
    {       
        {},
        {"2013141442001", "��Сһ", "123456", 1, 1.70, 70.0,"13612345678", "", "", {1993, 1, 2}},
        {"2013141442002", "ǮС��", "123456", 0, 1.60, 50.0,"13623456781", "", "", {1994, 12, 2}},
        {"2013141442003", "��С��", "123456", 1, 1.72, 71.0,"13634567812", "", "", {1994, 3, 9}},
        {"2013141442004", "��С��", "123456", 0, 1.64, 60.0,"13645678123", "", "", {1993, 4, 6}},
        {"2013141442005", "��С��", "123456", 1, 1.78, 75.0,"13656781234", "", "", {1993, 5, 5}}
    }; 
    StudentInfo* stu=stuList;
    AgeOrder(stu);
    for (int i = 1; i < (nStudent + 1); i++)
    writeStudent(stuList[i]);
	return 0;
}

void AgeOrder(StudentInfo* stu)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        int exchange = 0;
        for (int j = 1; j < 5-i; j++)
        {
            if ((stu[j].birthday.year * 10000 + stu[j].birthday.month * 100 + stu[j].birthday.day)> (stu[j+1].birthday.year * 10000 + stu[j+1].birthday.month * 100 + stu[j+1].birthday.day))
            {
                stu[0]=stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = stu[0];
                exchange = 1;
            }
        }
        if (exchange == 0)
        {
            break;
        }
    }
}
void writeStudent(StudentInfo stu) // ���ѧ����Ϣ
{
    cout << "������\t\t" << stu.name << endl;
    cout << "ѧ�ţ�\t\t" << stu.no << endl;
    cout << "�Ա�\t\t" << (stu.sexy == 1 ? "��" : "Ů") << endl;
    cout << "���գ�\t\t" << stu.birthday.year << "��" << stu.birthday.month << "��" << stu.birthday.day << "��" << endl;
    cout << "��ߣ�\t\t" << stu.height << endl;
    cout << "���أ�\t\t" << stu.weight << endl;
    cout << "�绰��\t\t" << stu.telephone << endl;
    cout << "E-mail��\t" << stu.e_mail << endl;
    cout << "QQ�ţ�\t\t" << stu.qq << endl;
}