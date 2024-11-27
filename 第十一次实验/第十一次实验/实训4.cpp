#include<iostream>
using namespace std;
static int gysh;//最大公约数
static int gbsh;//最小公倍数
void gybsh(int n1,int n2);

int main()//主程序
{
	int n1 = 0, n2 = 0;
	cout << "请依次输入两个整数:\n";
	cin >> n1; cin >> n2;
	gybsh(n1, n2);//调用函数求最大公约数和最小公倍数
	return 0;
}

void gybsh(int n1, int n2)
{
	int a = n1, b = n2;
	if (n1==n2)//相等情况
	{
		gysh = n1;
		gbsh = n1;
		return;
	}
	else if(n1>n2)//保证n1<n2
	{
		int t = n1;
		n1 = n2;
		n2 = t;
		for ( int i = n1; i >0; i--)//求最大公约数
		{
			if (!(n2 % i))
			{
				gysh = i;
				break;
			}
		}
		for (int i =1;;i++)//求最小公倍数
		{
			n2 *= i;
			if (!(n2 % n1))
			{
				gbsh = n2;
				break;
			}
		}
	}
	if (gysh == 0 && gbsh == 0)//两个数互为质数的情况
	{
		cout << "最大公约数为：" << 1 << endl;
		cout << "最小公倍数为：" << a * b << endl;
	}
	else//正常输出
	{
		cout << "最大公约数为：" << gysh << endl;
		cout << "最小公倍数为：" << gbsh << endl;
	}
}