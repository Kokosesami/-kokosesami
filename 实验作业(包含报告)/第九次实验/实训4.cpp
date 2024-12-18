#include<iostream>
using namespace std;

//统计某门课程平均成绩的函数先行声明
float average(int StuNum, float score[50]);

int main()
{
	float StuScore[50] = { 0 };
	int StuNum = 0;
	cout << "请输入学生人数："; cin >> StuNum;//输入学生人数
	cout << "请依次输入学生成绩：" << endl;//输入学生成绩
	for (int i = 0; i < StuNum; i++)
	{
		cin >> StuScore[i];
	}
	cout<<"学生平均成绩为："<<average(StuNum, StuScore);
	return 0;
}

//统计某门课程平均成绩的函数的函数体
float average(int StuNum, float score[50])
{
	float AveScore = 0;//平均成绩
	float sum = 0;//成绩总和
	for (int i = 0; i < StuNum; i++)
	{
		sum += score[i];
	}
	AveScore = sum / StuNum;
	return AveScore;
}