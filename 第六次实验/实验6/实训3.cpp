#include<iostream>
using namespace std;
int main()
{
	const int n = 10;
	int height[n + 1], i, j, min;
	height[0] = 0;
	cout << "����������ʮλѧ������ߣ�" << endl;
	for ( i = 1; i <=10 ; i++)
	{
		cin >> height[i];
	}
	for ( i = 1; i < n; i++)
	{
		min = i;
		for ( j = i+1; j <=n; j++)
		{
			if (height[j] < height[min])
			{
				min = j;
			}
		}
		if (min!=i)
		{
			height[0] = height[min];
			height[min] = height[i];
			height[i] = height[0];
		}
	}
	cout << "ʮλѧ������ߴӵ͵�������Ϊ��" << endl;
	for (i = 1; i <= 10; i++)
	{
		cout<< height[i]<<"\t";
	}
	return 0;
}