#include <iostream>
using namespace std;

int main() {
    int x, y, z;  // 定义三个整数变量
    cout << "请输入三个整数：";
    cin >> x >> y >> z;  // 从用户输入三个数

    // 比较 x, y, z 的大小，找出最大值
    int maxVal = x;  // 假设 x 是最大值

    if (y > maxVal) {
        maxVal = y;  // 如果 y 比 maxVal 大，则更新 maxVal
    }

    if (z > maxVal) {
        maxVal = z;  // 如果 z 比 maxVal 大，则更新 maxVal
    }

    cout << "最大的值是: " << maxVal << endl;  // 输出最大值

    return 0;
}
