#include<iostream>
using namespace std;
struct classScore
{
	char teacherID[20];
	char classID[20];
	int classNo;
	float normalScore;
	float exprimentScore;
	float finalScore;
	float termScore;
};
int main()
{
	char studentID[20];
	int m, i;
	const int n = 50;
	cout << "������ѧ��������������50����" << endl;
	cin >> m;
	classScore student[n] = { 0 };
	cout << "������ѧ��ѧ�ţ�";cin >> studentID;
	for (i = 0; i < m ; i++)
	{
		cout << "�������" << i+1 << "��ѧ�Ƶ���Ϣ" << endl;
		cout << "��ʦ��ţ�";
		cin >> student[i].teacherID;
		cout << "�γ̺ţ�";
		cin >> student[i].classID;
		cout << "����ţ�";
		cin >> student[i].classNo;
		cout << "ƽʱ�ɼ���";
		cin >> student[i].normalScore;
		cout << "ʵ��ɼ���";
		cin >> student[i].exprimentScore;
		cout << "���տ��Գɼ���";
		cin >> student[i].finalScore;
	}
	float max = 0, min = 100, avg = 0, Score = 0;
	//����ƽʱ�ɼ��������
	for (i = 0; i < m ; i++)
	{
		if (max < student[i].normalScore)
		{
			max = student[i].normalScore;
		}
		if (min > student[i].normalScore)
		{
			min = student[i].normalScore;
		}
		Score += student[i].normalScore;
	}
	avg = Score / m;
	cout << "*************ƽʱ�ɼ�*************" << endl;
	cout << "|��߷�Ϊ��" << max << endl;
	cout << "|��ͷ�Ϊ��" << min<< endl;
	cout << "|ƽ����Ϊ��" << avg << endl;
	//����ʵ��ɼ��������
	max = 0;min = 100;Score = 0;
	for (i = 0; i < m; i++)
	{
		if (max < student[i].exprimentScore)
		{
			max = student[i].exprimentScore;
		}
		if (min > student[i].exprimentScore)
		{
			min = student[i].exprimentScore;
		}
		Score += student[i].exprimentScore;
	}
	avg = Score / m;
	cout << "*************ʵ��ɼ�*************" << endl;
	cout << "|��߷�Ϊ��" << max << endl;
	cout << "|��ͷ�Ϊ��" << min<< endl;
	cout << "|ƽ����Ϊ��" << avg << endl;
	//�������տ��Գɼ��������
	max = 0;min = 100;Score = 0;
	for (i = 0; i < m; i++)
	{
		if (max < student[i].finalScore)
		{
			max = student[i].finalScore;
		}
		if (min > student[i].finalScore)
		{
			min = student[i].finalScore;
		}
		Score += student[i].finalScore;
	}
	avg = Score / m;
	cout << "*************���տ��Գɼ�*************" << endl;
	cout << "|��߷�Ϊ��" << max<< endl;
	cout << "|��ͷ�Ϊ��" << min<< endl;
	cout << "|ƽ����Ϊ��" << avg << endl;
	return 0;
}