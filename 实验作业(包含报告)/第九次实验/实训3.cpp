#include<iostream>
using namespace std;
unsigned int PPDI(int m);
int main()
{
	int n = 0;
	cout << "������һ����������";
	cin >> n;
	if (PPDI(n) == 0)
	{
		cout << "���������ˮ�ɻ���" << endl;
	}
	else
	{
		cout << "�������ˮ�ɻ���" << endl;
	}
	return 0;
}
unsigned int PPDI(int m)
{
	int n = m;
	int sum = 0;
	while (m != 0)
	{
		sum += pow((m % 10), 3);
		m = m / 10;
	}
	if (sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}