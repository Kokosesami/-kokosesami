#include <iostream> 
using namespace std;
int main()
{
    const int n = 10;
    int score[n + 1] = { 0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98 }; 
    int i;
    int x;
    cout << "请输入待查找的学生成绩：";
    cin >> x;
    score[0] = x;
    for (i = n; score[i] != x; i--);
    if (i >= 1)//第4）小问70->10;75->10;80->9;85->10;90->4:输入数据及对应执行次数
    {
            cout << "查找成功，待查找成绩是第" << i << "位学生的成绩" << endl;
    }
    else
    {
            cout << "未查找到该成绩！" <<  endl;
    }
    return 0;
}