#include <iostream>
using namespace std;

int main() {
    int x, y, z;  // ����������������
    cout << "����������������";
    cin >> x >> y >> z;  // ���û�����������

    // �Ƚ� x, y, z �Ĵ�С���ҳ����ֵ
    int maxVal = x;  // ���� x �����ֵ

    if (y > maxVal) {
        maxVal = y;  // ��� y �� maxVal ������� maxVal
    }

    if (z > maxVal) {
        maxVal = z;  // ��� z �� maxVal ������� maxVal
    }

    cout << "����ֵ��: " << maxVal << endl;  // ������ֵ

    return 0;
}
