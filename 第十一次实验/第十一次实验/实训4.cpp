#include<iostream>
using namespace std;

static int gysh=0;//最大公约数
static int gbsh=0;//最小公倍数
void gybsh(int n1,int n2);

int main()//主程序
{
	int n1 , n2 ;
	cout << "请依次输入两个整数:\n";
	cin >> n1; cin >> n2;
	gybsh(n1, n2);//调用函数求最大公约数和最小公倍数
	
	cout << "最大公约数为：" << gysh << endl;
	cout << "最小公倍数为：" << gbsh << endl;
	return 0;
}

void gybsh(int n1, int n2)
{
	if (n1==n2)//相等情况
	{
		gysh = n1;
		gbsh = n1;
		cout << "最大公约数为：" << n1 << endl;
		cout << "最小公倍数为：" << n1 << endl;
		return;
	}
	else if(n1>n2)//保证n1<n2
	{
		int t = n1;
		n1 = n2;
		n2 = t;
	}
	for ( int i = n1; i >1; i--)//求最大公约数
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
	if (gysh==0)
	{
		gysh = 1;
	}	
}