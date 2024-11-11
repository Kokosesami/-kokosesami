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
	int n=0, i, j;
	ClassInfo Class[20] = { 0 };
	cout << "请输入课程数量(不大于20）：";
	cin >> n;
	cout << "请输入课程信息：" << endl;
	for ( i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "门课程" << endl;
		cout << "课程编号：";
		cin >> Class[i].classNum;
		cout << "课程名称：";
		cin.ignore();
		gets_s(Class[i].className);
		cout << "学分：";
		cin >> Class[i].studyScore;
		cout << "学时：";
		cin >> Class[i].studyTime;
		cout << "周学时：";
		cin >> Class[i].weekStudyTime;
		cout << "学期：";
		cin >> Class[i].term;
	}
	int changed = 0;
	for ( i = 0; i < n; i++)
	{
		changed = 0;
		for ( j = 0; j < n-1-i; j++)
		{
			if(strcmp(Class[j].classNum, Class[j + 1].classNum) > 0)
			{
				Class[n] = Class[j];
				Class[j] = Class[j + 1];
				Class[j + 1] = Class[n];
				changed = 1;
			}
		}
		if (!changed)
		{
			break;
		}
	}
	cout << "排序结果为：\n" <<endl;
	for (i = 0; i < n; i++)
	{
		cout << "--------------------------------------------" << endl;
		cout << "I\t\t|课程编号|" << Class[i].classNum << endl;
		cout << "I\t\t|课程名称|";
		puts(Class[i].className);
		cout << "I\t\t|学分    |" << Class[i].studyScore << endl;
		cout << "I\t\t|学时    |" << Class[i].studyTime << endl;
		cout << "I\t\t|周学时  |" << Class[i].weekStudyTime << endl;
		cout << "I\t\t|学期    |" << Class[i].term << endl;
		cout << "--------------------------------------------" << endl;
	}
	return 0;
}