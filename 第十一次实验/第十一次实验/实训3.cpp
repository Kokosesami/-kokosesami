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
	cout << "请输入20个整数：\n";
	for ( i = 0; i <20; i++)
	{
		cin >> x[i];
	}
	maxNum = x[0];
	minNum = x[0];
	sum=numStatistic(x);
	cout << "最大值为：" << maxNum << endl;
	cout << "最小值为：" << minNum << endl;
	cout << "平均值为：" << sum << endl;
	return 0;
}

int numStatistic(int x[n])
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		sum += x[i];//累加得总和
		if (x[i] > maxNum)//找最大值
		{
			maxNum = x[i];
		}
		if (x[i] < minNum)//找最小值
		{
			minNum = x[i];
		}
	}
	return sum/n;
}