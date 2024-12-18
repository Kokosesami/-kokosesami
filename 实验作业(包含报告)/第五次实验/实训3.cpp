#include<iostream>
using namespace std;
int main()
{
	double x1 = -5, x2 = 5, x3, fx1, fx2, fx3;
	fx1 = x1 * x1 * x1 - 2 * x1 * x1 - x1 + 2;
	fx2 = x2 * x2 * x2 - 2 * x2 * x2 - x2 + 2;
	if (fx1*fx2>0)
	{
		cout << "不能保证区间内有根" << endl;
		return 0;
	}
	else
	{
		while (x1-x2>=1e-4||x2-x1>=1e-4)
		{
			x3 = (x1 + x2) / 2;
			fx3= x3* x3* x3- 2 * x3* x3- x3+ 2;
			if (fx3==0)
			{
				cout << "方程的根是：" << x3 << endl;
				break;
			}
			else
			{
				if (fx3 * fx1 < 0)
				{
					x2 = x3;
				}
				if (fx2 * fx3 < 0)
				{
					x1 = x3;
				}
			}
		}
	}
	cout << x3;
	return 0;
}