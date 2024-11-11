#include<iostream>
using namespace std;
int main()
{
	int credit[3] = { 4,3,2 }, i = 1, j = 0;
	float score[3], avgScore[100];
	char quit = '0';
	while (quit != 'q')
	{
		cout << "请输入第" << i << "位同学的成绩" << endl;
		for (j = 0; j < 3; j++)
		{
			cout << "请输入此同学第" << j + 1 << "门课程成绩：";
			cin >> score[j];
			while (score[j] < 0)
			{
				cout << "输入错误请输入正确格式的成绩:" ;
				cin >> score[j];
			}
		}
		avgScore[i] = ((score[0] * credit[0]) + (score[1] * credit[1]) + (score[2] * credit[2])) / 9;
		cout << "第" << i << "位同学的成绩为：" << avgScore[i] << endl;
		i++;
		cout << "输入任意字符以继续录入，输入“q”以终止录入下一个学生成绩" ;
		cin >> quit;
	}
	return 0;
}