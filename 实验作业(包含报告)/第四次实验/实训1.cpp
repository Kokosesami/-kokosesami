#include <iostream>             
using namespace std;
int main()                  
{
    int i = 0;                  
    int num = 0;                 
    double score = 0;             
    double sum = 0;             
    double avg = 0;             
    cout << "�����뿼������: ";
    cin >> num;
    cout << "����һ�����λ�����ĳɼ�: " << endl;
    for (i = 1; i <= num; i++)
    {
        cin >> score;              
        sum = sum+ score;
    }
    avg = sum / num;           
    cout << "ƽ������: " << avg << endl;
    return 0;
}