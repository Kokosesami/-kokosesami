#include <iostream>             
using namespace std;
int main()                  
{
    int i = 0;                  
    int num = 0;                 
    double score = 0;             
    double sum = 0;             
    double avg = 0;             
    cout << "请输入考生人数: ";
    cin >> num;
    cout << "请逐一输入各位考生的成绩: " << endl;
    for (i = 1; i <= num; i++)
    {
        cin >> score;              
        sum = sum+ score;
    }
    avg = sum / num;           
    cout << "平均分是: " << avg << endl;
    return 0;
}