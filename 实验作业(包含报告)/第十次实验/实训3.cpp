#include<iostream>
using namespace std;
int f(int n);								//��������

int main()												//��������ʼ
{
	int n=0;
	cout << "������Ҫ��������е���������1��ʼ����";
	cin >> n;
	cout << "ǰ"<<n<<"��Fibonacci�������£�" << endl;
	for (int i = 1; i <=n ; i++)
	{
		cout << "f(" << i << ")=" << f(i) <<"\t";
		if (i < 10)
		{
			cout << "\t";
		}
		if (!(i % 5))
		{
			cout << endl;
		}
	}
	return 0;
}

int f(int n)								//��������
{
	int N;
	if (n==1)
	{
		N = 1;
		return N;
	}
	else if (n==2)
	{
		N = 1; 
		return N;
	}
	else
	{
		N = f(n - 1) + f(n - 2);
		return N;
	}
}