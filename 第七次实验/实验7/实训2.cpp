#include <iostream>
using namespace std;
int main()
{
    const int N = 10;
    int A[N][N] = { 0 }, B[N][N] = { 0 }, C[N][N] = { 0 };
    int i = 0, j = 0, k = 0;
    int m1 = 0, n1 = 0;
    int m2 = 0, n2 = 0;
    do
    {
        cout << "请输入A矩阵的行、列数（不超过10）：";
        cin >> m1 >> n1;
        cout << "请输入B矩阵的行、列数（不超过10）：";
        cin >> m2 >> n2;
        if (n1 != m2)
        {
            cout << "矩阵维数不匹配！不允许相乘！请重新输入！" << endl;
        }
    } while (n1 != m2);
    cout << "请输入A矩阵：" << endl;
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    cout << "请输入B矩阵：" << endl;
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "结果矩阵C=" << endl;
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << "\t" << C[i][j];
        }
        cout << endl;
    }
    return 0;
}