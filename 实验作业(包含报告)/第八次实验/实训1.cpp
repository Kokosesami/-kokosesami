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
        cout << "�������" << i << "λѧ���ĳɼ���";
        cin >> p[i];
        if (maxScore < p[i])
        {
            maxScore = p[i];
        }
    }

    cout << "������߷�Ϊ" << maxScore << endl;
    cout << "�õ���߷ֵ�ѧ�����Ϊ��" << endl;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) == maxScore)
        {
            maxStudent++;
            cout << i << endl;
        }
    }
    cout << "����" << maxStudent << "λѧ���õ���߷�" << endl;
    return 0;
}