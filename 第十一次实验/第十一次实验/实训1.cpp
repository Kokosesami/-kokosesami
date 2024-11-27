#include <iostream>
using namespace std;

int main()
{
    char stuNo[50] = "";                // 定义字符数组用来存放学号
    unsigned int i = 0;                 // 数组下标变量
    unsigned int number = 0;            // 存放转换后得到的整数

    cout << "请输入学生的学号:\t";
    cin >> stuNo;

    while (stuNo[i] != '\0' && stuNo[i] >= '0' && stuNo[i] <= '9') // 遍历字符数组直到非数字字符或字符串结束
    {
        int k = stuNo[i] - 48;          // 定义局部变量k存放字符stuNo[i]的ASCII码和字符'0'的ASCII码之差
        number = 10 * number + k;       // 将字符转换为整数并累加到number中
        i++;
    }

    cout << "转换出的整数为: " << number << endl; // 输出转换后的整数
    return 0;                           // 程序结束
}