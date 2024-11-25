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

    cout << "学生信息输出如下：" << endl;

    for (int i = 1; i <= n; i++)
    {
        DispStuInfo(stuList,i);
    }

    return 0;
}

void ReadStuInfo(StudentInfo stuList[],int i)
{
        cout << "请输入第" << i << "位学生信息：" << endl;
        cout << "姓名：\t\t";
        cin.ignore();
        gets_s(stuList[i].name);
        cout << "学号：\t\t";
        cin >> stuList[i].no;
        cout << "密码：\t\t";
        cin >> stuList[i].password;
        cout << "性别(0为女，1为男)：\t";
        cin >> stuList[i].sexy;
        cout << "生日：" << endl;
        cout << "年：\t\t";
        cin >> stuList[i].birthday.year;
        cout << "月：\t\t";
        cin >> stuList[i].birthday.month;
        cout << "日：\t\t";
        cin >> stuList[i].birthday.day;
        cout << "身高：\t\t";
        cin >> stuList[i].height;
        cout << "体重：\t\t";
        cin >> stuList[i].weight;
        cout << "电话：\t\t";
        cin >> stuList[i].telephone;
        cout << "邮箱：\t\t";
        cin >> stuList[i].e_mail;
        cout << "QQ号：\t\t";
        cin >> stuList[i].qq;
}

void DispStuInfo(StudentInfo stuList[],int i)
{
        cout <<i<<"\t" << endl;
        cout << "姓名： " << stuList[i].name << endl;
        cout << "身高： " << stuList[i].height << " 米" << endl;
}