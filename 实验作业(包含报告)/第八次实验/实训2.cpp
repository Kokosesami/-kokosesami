#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	int score[n + 1] = { 0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98 };
	int x;
	int* p = 0;
	cout << "请输入待查找的学生成绩：";
	cin >> x;
	score[0] = x;
	for (p = score + n; *p != x; p--)
		;
	if (p == score)
	{
		cout << "在成绩册中查找不到该分数!" << endl;
	}
	else
	{
		cout << "查找到该分数所在的位置为：" << p - score << endl;
	}
	return 0;
}