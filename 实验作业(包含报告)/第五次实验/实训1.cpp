#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int examScore = 0;
    int maxExamScore = 0;
    int minExamScore = 0;
    int totalExamScore = 0;
    int averageExamScore = 0;
    int score_100 = 0;
    int score_90_99 = 0;
    int score_80_89 = 0;
    int score_70_79 = 0;
    int score_60_69 = 0;
    int score_0 = 0;
    cout<< "请输入学生成绩（0~100）：" << endl;
    cin >> examScore;
    maxExamScore = minExamScore = examScore;
    while (examScore >= 0 && examScore <= 100)//问题2：输入的examScore在0~100之间时才可以完成。
    {
        count++;
        if (examScore > maxExamScore)
        {
            maxExamScore = examScore;
        }
        if (examScore < minExamScore)
        {
            minExamScore = examScore;
        }
        switch (examScore / 10)
        {
        case 10: score_100++;
        case 9:  score_90_99++;
        case 8:  score_80_89++;
        case 7:  score_70_79++;
        case 6:  score_60_69++;
        default: score_0++; break;
        }

        totalExamScore += examScore;
        cin >> examScore;
    }
    averageExamScore = totalExamScore / count;
    cout << endl;
    cout << "选课总人数：" << count << endl;
    cout << "最高分：" << maxExamScore << endl;
    cout << "最低分：" << minExamScore << endl;
    cout << "平均分：" << averageExamScore << endl;
    cout << "100分人数：" << score_100 << endl;
    cout << "90~99分人数：" << score_90_99 << endl;
    cout << "80~89分人数：" << score_80_89 << endl;
    cout << "70~79分人数：" << score_70_79 << endl;
    cout << "60~69分人数：" << score_60_69 << endl;
    cout << "不及格人数：" << score_0 << endl;
    return 0;
}
