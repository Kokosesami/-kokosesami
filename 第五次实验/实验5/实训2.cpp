#include <iostream>
using namespace std; 
int main()
{
	int nChoice;
	char Choice,a;
	do
	{
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "\t\t|---------------ѧ��ѡ��ϵͳ(ѧ����)------------|\n";
		cout << "\t\t|   0. ����                                     |\n";
		cout << "\t\t|   1. ѧ����Ϣ����                             |\n";
		cout << "\t\t|   2. ��ʦ��Ϣ����                             |\n";
		cout << "\t\t|   3. �γ���Ϣ����                             |\n";
		cout << "\t\t|   4. ѧ��ѡ�ι���                             |\n";
		cout << "\t\t|   5. ѧ���ɼ�����                             |\n";
		cout << "\t\t|   6. ��Ϣͳ��ģ��                             |\n";
		cout << "\t\t|-----------------------------------------------|\n\n";
		cout << "\t\t\t������ģ����(0-6):";
		cin >> Choice;
		while (Choice < '0' || Choice>'6')
		{
			cout << "\n����������������������(0~6)��";
			cin >> Choice;
		}
		nChoice = Choice - '0';
		switch (nChoice)
		{
			case 0:cout << "\t\t|   0. ����                                     |" << endl;
				break;
			case 1:cout << "\t\t|   1. ѧ����Ϣ����                             |" << endl;
				break;
			case 2:cout << "\t\t|   2. ��ʦ��Ϣ����                             |" << endl;
				break;
			case 3:cout << "\t\t|   3. �γ���Ϣ����                             |" << endl;
				break;
			case 4:cout << "\t\t|   4. ѧ��ѡ�ι���                             |" << endl;
				break;
			case 5:cout << "\t\t|   5. ѧ���ɼ�����                             |" << endl;
				break;
			case 6:cout << "\t\t|   6. ��Ϣͳ��ģ��                             |" << endl;
				break;
			default:
				break;
		}
		if (nChoice!=0)
		{
			cout << "���������Է�����һ�˵�..." << endl;
			cin >> a;
		}
	} while (Choice != '0');
	return 0;
}