#include<iostream>
using namespace std;
struct ClassInfo
{
	char classNum[20];
	char className[100];
	float studyScore;
	int studyTime;
	float weekStudyTime;
	int term;
};
int main()
{
	int n=0, i, j;
	ClassInfo Class[20] = { 0 };
	cout << "������γ�����(������20����";
	cin >> n;
	cout << "������γ���Ϣ��" << endl;
	for ( i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "�ſγ�" << endl;
		cout << "�γ̱�ţ�";
		cin >> Class[i].classNum;
		cout << "�γ����ƣ�";
		cin.ignore();
		gets_s(Class[i].className);
		cout << "ѧ�֣�";
		cin >> Class[i].studyScore;
		cout << "ѧʱ��";
		cin >> Class[i].studyTime;
		cout << "��ѧʱ��";
		cin >> Class[i].weekStudyTime;
		cout << "ѧ�ڣ�";
		cin >> Class[i].term;
	}
	int changed = 0;
	for ( i = 0; i < n; i++)
	{
		changed = 0;
		for ( j = 0; j < n-1-i; j++)
		{
			if(strcmp(Class[j].classNum, Class[j + 1].classNum) > 0)
			{
				Class[n] = Class[j];
				Class[j] = Class[j + 1];
				Class[j + 1] = Class[n];
				changed = 1;
			}
		}
		if (!changed)
		{
			break;
		}
	}
	cout << "������Ϊ��\n" <<endl;
	for (i = 0; i < n; i++)
	{
		cout << "--------------------------------------------" << endl;
		cout << "I\t\t|�γ̱��|" << Class[i].classNum << endl;
		cout << "I\t\t|�γ�����|";
		puts(Class[i].className);
		cout << "I\t\t|ѧ��    |" << Class[i].studyScore << endl;
		cout << "I\t\t|ѧʱ    |" << Class[i].studyTime << endl;
		cout << "I\t\t|��ѧʱ  |" << Class[i].weekStudyTime << endl;
		cout << "I\t\t|ѧ��    |" << Class[i].term << endl;
		cout << "--------------------------------------------" << endl;
	}
	return 0;
}