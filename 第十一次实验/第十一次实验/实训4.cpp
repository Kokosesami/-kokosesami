#include<iostream>
using namespace std;

static int gysh=0;//���Լ��
static int gbsh=0;//��С������
void gybsh(int n1,int n2);

int main()//������
{
	int n1 , n2 ;
	cout << "������������������:\n";
	cin >> n1; cin >> n2;
	gybsh(n1, n2);//���ú��������Լ������С������
	
	cout << "���Լ��Ϊ��" << gysh << endl;
	cout << "��С������Ϊ��" << gbsh << endl;
	return 0;
}

void gybsh(int n1, int n2)
{
	if (n1==n2)//������
	{
		gysh = n1;
		gbsh = n1;
		cout << "���Լ��Ϊ��" << n1 << endl;
		cout << "��С������Ϊ��" << n1 << endl;
		return;
	}
	else if(n1>n2)//��֤n1<n2
	{
		int t = n1;
		n1 = n2;
		n2 = t;
	}
	for ( int i = n1; i >1; i--)//�����Լ��
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
	if (gysh==0)
	{
		gysh = 1;
	}	
}