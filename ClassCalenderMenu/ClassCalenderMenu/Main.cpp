#include<iostream>
using namespace std;

void showMenu()
{
    cout << "\n===============================" << endl;
    cout << "|        ��������ѯ����       |" << endl;
    cout << "===============================" << endl;
    cout << "| 1. ��������                |" << endl;
    cout << "| 2. ����תũ��              |" << endl;
    cout << "| 3. ũ��������ѯ���        |" << endl;
    cout << "| 0. �˳�����                |" << endl;
    cout << "===============================" << endl;
    cout << "������ѡ��: ";
}
int main() 
{
    int choice;
    showMenu(); // ��ʾ�˵�
    cin >> choice;

    switch (choice) 
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
        {
            int year;
            cout << "��������ݣ�";
            cin >> year;
            break;
        }
        case 0:
            cout << "�������˳���ллʹ�ã�" << endl;
            break;
        default:
            cout << "��Чѡ�������ѡ��" << endl;
            break;
    }
    return 0;
}