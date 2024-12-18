#include<iostream>
using namespace std;
unsigned int PPDI(int m);
int main()
{
	int n = 0;
	cout << "请输入一个正整数：";
	cin >> n;
	if (PPDI(n) == 0)
	{
		cout << "这个数不是水仙花数" << endl;
	}
	else
	{
		cout << "这个数是水仙花数" << endl;
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