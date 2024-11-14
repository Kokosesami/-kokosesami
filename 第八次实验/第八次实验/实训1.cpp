#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    int score[n];
    int maxScore = 0;
    int maxStudent = 0;
    int i;
    int* p;
    p = score;

    for (i = 0; i < n; i++)
    {
        cout << "请输入第" << i << "位学生的成绩：";
        cin >> p[i];
        if (maxScore < p[i])
        {
            maxScore = p[i];
        }
    }

    cout << "本班最高分为" << maxScore << endl;
    cout << "得到最高分的学生序号为：" << endl;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) == maxScore)
        {
            maxStudent++;
            cout << i << endl;
        }
    }
    cout << "共有" << maxStudent << "位学生得到最高分" << endl;
    return 0;
}