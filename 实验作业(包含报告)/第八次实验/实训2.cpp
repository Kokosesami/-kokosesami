#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	int score[n + 1] = { 0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98 };
	int x;
	int* p = 0;
	cout << "����������ҵ�ѧ���ɼ���";
	cin >> x;
	score[0] = x;
	for (p = score + n; *p != x; p--)
		;
	if (p == score)
	{
		cout << "�ڳɼ����в��Ҳ����÷���!" << endl;
	}
	else
	{
		cout << "���ҵ��÷������ڵ�λ��Ϊ��" << p - score << endl;
	}
	return 0;
}