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
	int n = 0, i;
	ClassInfo Class[20] = { 0 };
	cout << "������γ�����(������20����";
	cin >> n;
	cout << "������γ���Ϣ��" << endl;
	ClassInfo* p = 0;
	for (p=Class; p <Class+n; p++)
	{
		cout << "��" << p - Class + 1 << "�ſγ�" << endl;
		cout << "�γ̱�ţ�";
		cin >> p->classNum;
		cout << "�γ����ƣ�";
		cin.ignore();
		gets_s(p->className);
		cout << "ѧ�֣�";
		cin >> p->studyScore;
		cout << "ѧʱ��";
		cin >> p->studyTime;
		cout << "��ѧʱ��";
		cin >> p->weekStudyTime;
		cout << "ѧ�ڣ�";
		cin >> p->term;
	}
	int changed = 0;		
	for (p = Class; p < Class + n; p++)
	{
		changed = 0;
		for (i = 0; i < Class + n - p; i++)
		{
			if (strcmp((p + i)->classNum, (p+i+1)->classNum) > 0)
			{
				*(p + n) = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = *(p + n);
				changed = 1;
			}
		}
		if (!changed)
		{
			break;
		}
	}
	cout << "������Ϊ��\n" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "--------------------------------------------" << endl;
		cout << "I\t\t|�γ̱��|" << p->classNum << endl;
		cout << "I\t\t|�γ�����|";
		puts(p->className);
		cout << "I\t\t|ѧ��    |" << p->studyScore << endl;
		cout << "I\t\t|ѧʱ    |" << p->studyTime << endl;
		cout << "I\t\t|��ѧʱ  |" << p->weekStudyTime << endl;
		cout << "I\t\t|ѧ��    |" << p->term << endl;
		cout << "--------------------------------------------" << endl;
	}
	return 0;
}