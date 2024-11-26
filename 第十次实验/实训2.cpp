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
    char e_mail[40];    // E-mail
    char qq[20];        // QQ号
    Date birthday;      // 生日
};

StudentInfo readStudent();                  //申明读入学生信息函数
void writeStudent(StudentInfo& stu);                //申明输出学生信息函数
int main()
{
    cout << "请输入学生信息：" << endl;
    StudentInfo stu = readStudent();
    cout << "你输入的学生信息如下：" << endl;
    writeStudent(stu);
    return 0;
}


StudentInfo readStudent()                  //读入学生信息
{
    StudentInfo stu;
    fflush(stdin);                                  //清空输入缓冲区
    cout << "姓名：\t\t";
    gets_s(stu.name);
    cout << "学号：\t\t";
    cin >> stu.no;
    cout << "密码：\t\t";
    cin >> stu.password;
    cout << "性别（0为女，1为男）：\t";
    cin >> stu.sexy;
    cout << "生日：" << endl;
    cout << "年：\t\t";
    cin >> stu.birthday.year;
    cout << "月：\t\t";
    cin >> stu.birthday.month;
    cout << "日：\t\t";
    cin >> stu.birthday.day;
    cout << "身高：\t\t";
    cin >> stu.height;
    cout << "体重：\t\t";
    cin >> stu.weight;
    fflush(stdin);                                  //清空输入缓冲区
    cout << "电话；\t\t";
    cin >> stu.telephone;
    fflush(stdin);                                  //清空输入缓冲区
    cout << "E_mail:\t\t";
    cin >> stu.e_mail;
    fflush(stdin);                                  //清空输入缓冲区
    cout << "QQ号：\t\t";
    cin >> stu.qq;
    return stu;
}
void writeStudent(StudentInfo& stu)            //输出学生信息
{
    cout << "姓名：\t\t" << stu.name << endl;
    cout << "学号：\t\t" << stu.no << endl;
    cout << "性别：\t\t" << (stu.sexy == 1 ? "男" : "女" )<< endl;
    cout << "生日：\t\t" << stu.birthday.year << "年" << stu.birthday.month << "月" << stu.birthday.day << "日" << endl;
    cout << "身高：\t\t" << stu.height << endl;
    cout << "体重：\t\t" << stu.weight << endl;
    cout << "电话：\t\t" << stu.telephone << endl;
    cout << "E_mail : \t\t" << stu.e_mail << endl;
    cout << "QQ号：\t\t" << stu.qq<<endl;
}