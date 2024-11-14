#include<iostream>
using namespace std;
int main()
{
	char str[21] = { '\0' };
	char* p = 0;
	cout << "请输入一个字符串（不超过20个）:";
	gets_s(str);
	for (p = str; *p!= '\0'; p++);
	for ( p = p-1; p >=str; p--)
	{
		cout << *p;
	}
	return 0;
}