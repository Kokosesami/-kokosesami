#include<iostream>
using namespace std;

//ͳ��ĳ�ſγ�ƽ���ɼ��ĺ�����������
float average(int StuNum, float score[50]);

int main()
{
	float StuScore[50] = { 0 };
	int StuNum = 0;
	cout << "������ѧ��������"; cin >> StuNum;//����ѧ������
	cout << "����������ѧ���ɼ���" << endl;//����ѧ���ɼ�
	for (int i = 0; i < StuNum; i++)
	{
		cin >> StuScore[i];
	}
	cout<<"ѧ��ƽ���ɼ�Ϊ��"<<average(StuNum, StuScore);
	return 0;
}

//ͳ��ĳ�ſγ�ƽ���ɼ��ĺ����ĺ�����
float average(int StuNum, float score[50])
{
	float AveScore = 0;//ƽ���ɼ�
	float sum = 0;//�ɼ��ܺ�
	for (int i = 0; i < StuNum; i++)
	{
		sum += score[i];
	}
	AveScore = sum / StuNum;
	return AveScore;
}