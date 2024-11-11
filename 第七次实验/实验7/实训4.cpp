#include<iostream>
using namespace std;
struct classScore
{
	char teacherID[20];
	char classID[20];
	int classNo;
	float normalScore;
	float exprimentScore;
	float finalScore;
	float termScore;
};
int main()
{
	char studentID[20];
	int m, i;
	const int n = 50;
	cout << "请输入学科门数（不超过50）：" << endl;
	cin >> m;
	classScore student[n] = { 0 };
	cout << "请输入学生学号：";cin >> studentID;
	for (i = 0; i < m ; i++)
	{
		cout << "请输入第" << i+1 << "门学科的信息" << endl;
		cout << "教师编号：";
		cin >> student[i].teacherID;
		cout << "课程号：";
		cin >> student[i].classID;
		cout << "课序号：";
		cin >> student[i].classNo;
		cout << "平时成绩：";
		cin >> student[i].normalScore;
		cout << "实验成绩：";
		cin >> student[i].exprimentScore;
		cout << "期终考试成绩：";
		cin >> student[i].finalScore;
	}
	float max = 0, min = 100, avg = 0, Score = 0;
	//计算平时成绩相关数据
	for (i = 0; i < m ; i++)
	{
		if (max < student[i].normalScore)
		{
			max = student[i].normalScore;
		}
		if (min > student[i].normalScore)
		{
			min = student[i].normalScore;
		}
		Score += student[i].normalScore;
	}
	avg = Score / m;
	cout << "*************平时成绩*************" << endl;
	cout << "|最高分为：" << max << endl;
	cout << "|最低分为：" << min<< endl;
	cout << "|平均分为：" << avg << endl;
	//计算实验成绩相关数据
	max = 0;min = 100;Score = 0;
	for (i = 0; i < m; i++)
	{
		if (max < student[i].exprimentScore)
		{
			max = student[i].exprimentScore;
		}
		if (min > student[i].exprimentScore)
		{
			min = student[i].exprimentScore;
		}
		Score += student[i].exprimentScore;
	}
	avg = Score / m;
	cout << "*************实验成绩*************" << endl;
	cout << "|最高分为：" << max << endl;
	cout << "|最低分为：" << min<< endl;
	cout << "|平均分为：" << avg << endl;
	//计算期终考试成绩相关数据
	max = 0;min = 100;Score = 0;
	for (i = 0; i < m; i++)
	{
		if (max < student[i].finalScore)
		{
			max = student[i].finalScore;
		}
		if (min > student[i].finalScore)
		{
			min = student[i].finalScore;
		}
		Score += student[i].finalScore;
	}
	avg = Score / m;
	cout << "*************期终考试成绩*************" << endl;
	cout << "|最高分为：" << max<< endl;
	cout << "|最低分为：" << min<< endl;
	cout << "|平均分为：" << avg << endl;
	return 0;
}