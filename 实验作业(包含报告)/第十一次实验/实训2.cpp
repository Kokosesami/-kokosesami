#include <iostream>
using namespace std;

static int score[10] = { 0 };               //��̬����score
static int maxScore = 0, minScore = 0;      //��̬����minScore��maxScore

void find_Max_Min();                        //�����ֵ����Сֵ����˵��

int main()
{
    int i = 0;
    cout << "Enter 10 scores:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> score[i];
    }
    maxScore = minScore = score[0];
    find_Max_Min();                         //��������
    cout << "The Max score: " << maxScore << endl;
    cout << "The Min score: " << minScore << endl;
    return 0;
}

void find_Max_Min()                         /*�����ֵ����Сֵ*/
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
