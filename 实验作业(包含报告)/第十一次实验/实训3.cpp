#include<iostream>
using namespace std;

static int maxNum;
static int minNum;
const int n = 20;
static int sum;

int numStatistic(int x[20]);

int main() 
{
	
	int i;
	int x[n] = { 0 };
	cout << "������20��������\n";
	for ( i = 0; i <20; i++)
	{
		cin >> x[i];
	}
	maxNum = x[0];
	minNum = x[0];
	sum=numStatistic(x);
	cout << "���ֵΪ��" << maxNum << endl;
	cout << "��СֵΪ��" << minNum << endl;
	cout << "ƽ��ֵΪ��" << sum << endl;
	return 0;
}

int numStatistic(int x[n])
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		sum += x[i];//�ۼӵ��ܺ�
		if (x[i] > maxNum)//�����ֵ
		{
			maxNum = x[i];
		}
		if (x[i] < minNum)//����Сֵ
		{
			minNum = x[i];
		}
	}
	return sum/n;
}