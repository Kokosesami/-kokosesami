#include <iostream> 
using namespace std;
int main()
{
    const int n = 10;
    int score[n + 1] = { 0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98 }; 
    int i;
    int x;
    cout << "����������ҵ�ѧ���ɼ���";
    cin >> x;
    score[0] = x;
    for (i = n; score[i] != x; i--);
    if (i >= 1)//��4��С��70->10;75->10;80->9;85->10;90->4:�������ݼ���Ӧִ�д���
    {
            cout << "���ҳɹ��������ҳɼ��ǵ�" << i << "λѧ���ĳɼ�" << endl;
    }
    else
    {
            cout << "δ���ҵ��óɼ���" <<  endl;
    }
    return 0;
}