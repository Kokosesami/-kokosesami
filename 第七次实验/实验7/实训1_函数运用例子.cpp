#include <iostream>
#include<fstream>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};
struct StudentInfo
{
    char no[20];
    char name[20];
    char password[20];
    int sexy;
    double height;
    double weight;
    char telephone[20];
    char e_mail[40];
    char qq[20];
    Date birthday;
};

void ReadStuInfo(StudentInfo stuList[], int n);
void DispStuInfo(StudentInfo stuList[], int n);

int main()
{
    const int n = 5;
    StudentInfo stuList[n + 1] = { 0 }, temp;
    int i = 0, j = 0;
    int changed = 0;

    for (int i = 1; i <= n; i++)
    {
        ReadStuInfo(stuList,i);
    }

    for (i = 1; i < n; i++) 
    {
        changed = 0;
        for (j = 1; j <= n - i; j++) 
        {
            if (stuList[j].height > stuList[j + 1].height) 
            {
                temp = stuList[j];
                stuList[j] = stuList[j + 1];
                stuList[j + 1] = temp;
                changed = 1;
            }
        }
        if (!changed) {
            break;
        }
    }

    cout << "ѧ����Ϣ������£�" << endl;

    for (int i = 1; i <= n; i++)
    {
        DispStuInfo(stuList,i);
    }

    return 0;
}

void ReadStuInfo(StudentInfo stuList[],int i)
{
        cout << "�������" << i << "λѧ����Ϣ��" << endl;
        cout << "������\t\t";
        cin.ignore();
        gets_s(stuList[i].name);
        cout << "ѧ�ţ�\t\t";
        cin >> stuList[i].no;
        cout << "���룺\t\t";
        cin >> stuList[i].password;
        cout << "�Ա�(0ΪŮ��1Ϊ��)��\t";
        cin >> stuList[i].sexy;
        cout << "���գ�" << endl;
        cout << "�꣺\t\t";
        cin >> stuList[i].birthday.year;
        cout << "�£�\t\t";
        cin >> stuList[i].birthday.month;
        cout << "�գ�\t\t";
        cin >> stuList[i].birthday.day;
        cout << "��ߣ�\t\t";
        cin >> stuList[i].height;
        cout << "���أ�\t\t";
        cin >> stuList[i].weight;
        cout << "�绰��\t\t";
        cin >> stuList[i].telephone;
        cout << "���䣺\t\t";
        cin >> stuList[i].e_mail;
        cout << "QQ�ţ�\t\t";
        cin >> stuList[i].qq;
}

void DispStuInfo(StudentInfo stuList[],int i)
{
        cout <<i<<"\t" << endl;
        cout << "������ " << stuList[i].name << endl;
        cout << "��ߣ� " << stuList[i].height << " ��" << endl;
}