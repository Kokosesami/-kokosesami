#include<iostream>
using namespace std;
int main()
{
	int i, j, t, num[10];
	cout << "����������ʮ����:\n";
	for ( i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 9-i; j++)
		{
			if (num[j] > num[j + 1])
			{
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
	for ( i = 0; i <=9; i++)
	{
		cout << num[i] << "\t";
	}
		const int n = 9;
		int  low, high, mid, x;
		cout << "���������������\n";
		cin >> x;
		low = 0;
		high = n;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (num[mid] == x)
			{
				break;
			}
			else if (num[mid] < x)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
			if(low>high)
			{
				cout << "����ʧ�ܣ�����������Ҫ���ҵ�����";
				cin >> x;
			}
		}		
		if (x == num[mid])
		{	
			cout << "���ҳɹ������ҵ����ǵ�" << mid + 1 << "����"<<endl;
		}
	return 0;
}