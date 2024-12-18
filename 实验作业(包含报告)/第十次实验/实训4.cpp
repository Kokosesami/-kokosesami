#include<iostream>
using namespace std;
struct Date
{
    int year;  // 年
    int month; // 月
    int day;   // 日
};

struct StudentInfo
{
    char no[20];        // 学号
    char name[20];      // 姓名
    char password[20];  // 密码
    int sexy;           // 性别（1为男，0为女）
    double height;      // 身高
    double weight;      // 体重
    char telephone[20]; // 电话
    char e_mail[40];     // E-mail
    char qq[20];        // QQ号
    Date birthday;      // 生日
};

void AgeOrder(StudentInfo *stu);
void writeStudent(StudentInfo stu);

int main()
{
    const int nStudent = 5;
     StudentInfo stuList[nStudent+1] =//学生信息初始化
    {       
        {},
        {"2013141442001", "赵小一", "123456", 1, 1.70, 70.0,"13612345678", "", "", {1993, 1, 2}},
        {"2013141442002", "钱小二", "123456", 0, 1.60, 50.0,"13623456781", "", "", {1994, 12, 2}},
        {"2013141442003", "孙小三", "123456", 1, 1.72, 71.0,"13634567812", "", "", {1994, 3, 9}},
        {"2013141442004", "李小四", "123456", 0, 1.64, 60.0,"13645678123", "", "", {1993, 4, 6}},
        {"2013141442005", "周小五", "123456", 1, 1.78, 75.0,"13656781234", "", "", {1993, 5, 5}}
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
void writeStudent(StudentInfo stu) // 输出学生信息
{
    cout << "姓名：\t\t" << stu.name << endl;
    cout << "学号：\t\t" << stu.no << endl;
    cout << "性别：\t\t" << (stu.sexy == 1 ? "男" : "女") << endl;
    cout << "生日：\t\t" << stu.birthday.year << "年" << stu.birthday.month << "月" << stu.birthday.day << "日" << endl;
    cout << "身高：\t\t" << stu.height << endl;
    cout << "体重：\t\t" << stu.weight << endl;
    cout << "电话：\t\t" << stu.telephone << endl;
    cout << "E-mail：\t" << stu.e_mail << endl;
    cout << "QQ号：\t\t" << stu.qq << endl;
}