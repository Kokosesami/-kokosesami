#include <iostream>
using namespace std;

static int score[10] = { 0 };               //静态变量score
static int maxScore = 0, minScore = 0;      //静态变量minScore和maxScore

void find_Max_Min();                        //找最大值和最小值函数说明

int main()
{
    int i = 0;
    cout << "Enter 10 scores:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> score[i];
    }
    maxScore = minScore = score[0];
    find_Max_Min();                         //函数调用
    cout << "The Max score: " << maxScore << endl;
    cout << "The Min score: " << minScore << endl;
    return 0;
}

void find_Max_Min()                         /*求最大值和最小值*/
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (score[i] > maxScore)
        {
            maxScore = score[i];
        }
        if (score[i] < minScore)
        {
            minScore = score[i];
        }
    }
    return;
}
