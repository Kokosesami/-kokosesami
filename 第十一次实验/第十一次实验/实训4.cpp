#include<iostream>
using namespace std;
static int gysh;//���Լ��
static int gbsh;//��С������
void gybsh(int n1,int n2);

int main()//������
{
	int n1 = 0, n2 = 0;
	cout << "������������������:\n";
	cin >> n1; cin >> n2;
	gybsh(n1, n2);//���ú��������Լ������С������
	return 0;
}

void gybsh(int n1, int n2)
{
	int a = n1, b = n2;
	if (n1==n2)//������
	{
		gysh = n1;
		gbsh = n1;
		return;
	}
	else if(n1>n2)//��֤n1<n2
	{
		int t = n1;
		n1 = n2;
		n2 = t;
		for ( int i = n1; i >0; i--)//�����Լ��
		{
			if (!(n2 % i))
			{
				gysh = i;
				break;
			}
		}
		for (int i =1;;i++)//����С������
		{
			n2 *= i;
			if (!(n2 % n1))
			{
				gbsh = n2;
				break;
			}
		}
	}
	if (gysh == 0 && gbsh == 0)//��������Ϊ���������
	{
		cout << "���Լ��Ϊ��" << 1 << endl;
		cout << "��С������Ϊ��" << a * b << endl;
	}
	else//�������
	{
		cout << "���Լ��Ϊ��" << gysh << endl;
		cout << "��С������Ϊ��" << gbsh << endl;
	}
}