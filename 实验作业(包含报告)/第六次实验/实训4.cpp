#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	char centence[80] = "";
	char ch, result[80] = "";
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º";
	gets_s(centence);
	n = strlen(centence);
	for ( i = 0; i <n; i++)
	{
		ch = centence[i];
		if (ch>='a'&&ch<='z')
		{
			ch = ch - 'a' + 'A';
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 'a';
		}
		result[n-i-1] = ch;
	}
	centence[n] = '\0';
	result[n] = '\0';
	puts(result);
	return 0;
}