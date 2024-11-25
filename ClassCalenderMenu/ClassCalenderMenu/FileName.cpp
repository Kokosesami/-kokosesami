#include <iostream>
#include <iomanip> // 用于对齐输出
#include <ctime>   // 用于时间处理
#include <string>
using namespace std;

// 函数声明
void showMenu();
void calculateDay();
void gregorianToLunar();
void lunarToGregorian();
void displayCalendar(int year);
bool isLeapYear(int year);

int main() {
    int choice;
    do {
        showMenu(); // 显示菜单
        cin >> choice;

        switch (choice) {
        case 1:
            calculateDay();
            break;
        case 2:
            gregorianToLunar();
            break;
        case 3:
            lunarToGregorian();
            break;
        case 4: {
            int year;
            cout << "请输入年份：";
            cin >> year;
            displayCalendar(year);
            break;
        }
        case 0:
            cout << "程序已退出，谢谢使用！" << endl;
            break;
        default:
            cout << "无效选项，请重新选择！" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

// 菜单界面
void showMenu() {
    cout << "\n===============================" << endl;
    cout << "|        万年历查询程序       |" << endl;
    cout << "===============================" << endl;
    cout << "| 1. 计算日期                |" << endl;
    cout << "| 2. 公历转农历              |" << endl;
    cout << "| 3. 农历转公历              |" << endl;
    cout << "| 4. 显示年历               |" << endl;
    cout << "| 0. 退出程序                |" << endl;
    cout << "===============================" << endl;
    cout << "请输入选项: ";
}

// 计算日期（功能占位实现）
void calculateDay() {
    cout << "功能：计算日期。" << endl;
    // 可以在这里实现日期的计算逻辑
}

// 公历转农历（功能占位实现）
void gregorianToLunar() {
    cout << "功能：公历转农历。" << endl;
    // 可以在这里实现公历转农历的逻辑
}

// 农历转公历（功能占位实现）
void lunarToGregorian() {
    cout << "功能：农历转公历。" << endl;
    // 可以在这里实现农历转公历的逻辑
}

// 显示年历
void displayCalendar(int year) {
    cout << "\n===============================" << endl;
    cout << "        " << year << " 年的年历" << endl;
    cout << "===============================" << endl;

    string months[] = {
        "一月", "二月", "三月", "四月", "五月", "六月",
        "七月", "八月", "九月", "十月", "十一月", "十二月"
    };

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // 判断是否为闰年，调整二月的天数
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    for (int month = 0; month < 12; ++month) {
        cout << "\n  " << months[month] << " " << year << endl;
        cout << "日 一 二 三 四 五 六" << endl;

        // 计算该月第一天是星期几
        struct tm firstDay = { 0 };
        firstDay.tm_year = year - 1900; // 年份从1900开始
        firstDay.tm_mon = month;       // 月份从0开始
        firstDay.tm_mday = 1;          // 每月第一天
        mktime(&firstDay);

        int startDay = firstDay.tm_wday; // 星期几

        // 打印空格
        for (int i = 0; i < startDay; ++i) {
            cout << "   ";
        }

        // 打印日期
        for (int day = 1; day <= daysInMonth[month]; ++day) {
            cout << setw(2) << day << " ";
            if ((startDay + day) % 7 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }
}

// 判断是否是闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
