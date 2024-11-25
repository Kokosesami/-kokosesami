#include <iostream>
#include <iomanip> // ���ڶ������
#include <ctime>   // ����ʱ�䴦��
#include <string>
using namespace std;

// ��������
void showMenu();
void calculateDay();
void gregorianToLunar();
void lunarToGregorian();
void displayCalendar(int year);
bool isLeapYear(int year);

int main() {
    int choice;
    do {
        showMenu(); // ��ʾ�˵�
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
            cout << "��������ݣ�";
            cin >> year;
            displayCalendar(year);
            break;
        }
        case 0:
            cout << "�������˳���ллʹ�ã�" << endl;
            break;
        default:
            cout << "��Чѡ�������ѡ��" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

// �˵�����
void showMenu() {
    cout << "\n===============================" << endl;
    cout << "|        ��������ѯ����       |" << endl;
    cout << "===============================" << endl;
    cout << "| 1. ��������                |" << endl;
    cout << "| 2. ����תũ��              |" << endl;
    cout << "| 3. ũ��ת����              |" << endl;
    cout << "| 4. ��ʾ����               |" << endl;
    cout << "| 0. �˳�����                |" << endl;
    cout << "===============================" << endl;
    cout << "������ѡ��: ";
}

// �������ڣ�����ռλʵ�֣�
void calculateDay() {
    cout << "���ܣ��������ڡ�" << endl;
    // ����������ʵ�����ڵļ����߼�
}

// ����תũ��������ռλʵ�֣�
void gregorianToLunar() {
    cout << "���ܣ�����תũ����" << endl;
    // ����������ʵ�ֹ���תũ�����߼�
}

// ũ��ת����������ռλʵ�֣�
void lunarToGregorian() {
    cout << "���ܣ�ũ��ת������" << endl;
    // ����������ʵ��ũ��ת�������߼�
}

// ��ʾ����
void displayCalendar(int year) {
    cout << "\n===============================" << endl;
    cout << "        " << year << " �������" << endl;
    cout << "===============================" << endl;

    string months[] = {
        "һ��", "����", "����", "����", "����", "����",
        "����", "����", "����", "ʮ��", "ʮһ��", "ʮ����"
    };

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // �ж��Ƿ�Ϊ���꣬�������µ�����
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    for (int month = 0; month < 12; ++month) {
        cout << "\n  " << months[month] << " " << year << endl;
        cout << "�� һ �� �� �� �� ��" << endl;

        // ������µ�һ�������ڼ�
        struct tm firstDay = { 0 };
        firstDay.tm_year = year - 1900; // ��ݴ�1900��ʼ
        firstDay.tm_mon = month;       // �·ݴ�0��ʼ
        firstDay.tm_mday = 1;          // ÿ�µ�һ��
        mktime(&firstDay);

        int startDay = firstDay.tm_wday; // ���ڼ�

        // ��ӡ�ո�
        for (int i = 0; i < startDay; ++i) {
            cout << "   ";
        }

        // ��ӡ����
        for (int day = 1; day <= daysInMonth[month]; ++day) {
            cout << setw(2) << day << " ";
            if ((startDay + day) % 7 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }
}

// �ж��Ƿ�������
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
