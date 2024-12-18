#include<iostream>
using namespace std;
int f(int n);								//函数声明

int main()												//主函数开始
{
	int n=0;
	cout << "请输入要输出的数列的项数（从1开始）：";
	cin >> n;
	cout << "前"<<n<<"项Fibonacci数列如下：" << endl;
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

int f(int n)								//函数声明
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