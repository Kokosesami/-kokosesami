#include <iostream>
using namespace std;
int main() {
    int n, i;
    long long factorial = 1; 
    long long sum = 0;
    cout << "ÇëÊäÈënµÄÖµ: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        factorial *= i; 
        sum += factorial; 
    }
    cout << "1!+2!+...+" << n << "!=" << sum << endl;
    return 0;
}