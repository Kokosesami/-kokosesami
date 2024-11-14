#include<iostream>
using namespace std;
struct ClassInfo
{
	char classNum[20];
	char className[100];
	float studyScore;
	int studyTime;
	float weekStudyTime;
	int term;
};
int main()
{
	int n = 0, i;
	ClassInfo Class[20] = { 0 };
	cout << "请输入课程数量(不大于20）：";
	cin >> n;
	cout << "请输入课程信息：" << endl;
	ClassInfo* p = 0;
	for (p=Class; p <Class+n; p++)
	{
		cout << "第" << p - Class + 1 << "门课程" << endl;
		cout << "课程编号：";
		cin >> p->classNum;
		cout << "课程名称：";
		cin.ignore();
		gets_s(p->className);
		cout << "学分：";
		cin >> p->studyScore;
		cout << "学时：";
		cin >> p->studyTime;
		cout << "周学时：";
		cin >> p->weekStudyTime;
		cout << "学期：";
		cin >> p->term;
	}
	int changed = 0;		
	for (p = Class; p < Class + n; p++)
	{
		changed = 0;
		for (i = 0; i < Class + n - p; i++)
		{
			if (strcmp((p + i)->classNum, (p+i+1)->classNum) > 0)
			{
				*(p + n) = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = *(p + n);
				changed = 1;
			}
		}
		if (!changed)
		{
			break;
		}
	}
	cout << "排序结果为：\n" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "--------------------------------------------" << endl;
		cout << "I\t\t|课程编号|" << p->classNum << endl;
		cout << "I\t\t|课程名称|";
		puts(p->className);
		cout << "I\t\t|学分    |" << p->studyScore << endl;
		cout << "I\t\t|学时    |" << p->studyTime << endl;
		cout << "I\t\t|周学时  |" << p->weekStudyTime << endl;
		cout << "I\t\t|学期    |" << p->term << endl;
		cout << "--------------------------------------------" << endl;
	}
	return 0;
}