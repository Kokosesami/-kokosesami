#include<iostream>
using namespace std;
int main()
{
	int credit[3] = { 4,3,2 }, i = 1, j = 0;
	float score[3], avgScore[100];
	char quit = '0';
	while (quit != 'q')
	{
		cout << "�������" << i << "λͬѧ�ĳɼ�" << endl;
		for (j = 0; j < 3; j++)
		{
			cout << "�������ͬѧ��" << j + 1 << "�ſγ̳ɼ���";
			cin >> score[j];
			while (score[j] < 0)
			{
				cout << "���������������ȷ��ʽ�ĳɼ�:" ;
				cin >> score[j];
			}
		}
		avgScore[i] = ((score[0] * credit[0]) + (score[1] * credit[1]) + (score[2] * credit[2])) / 9;
		cout << "��" << i << "λͬѧ�ĳɼ�Ϊ��" << avgScore[i] << endl;
		i++;
		cout << "���������ַ��Լ���¼�룬���롰q������ֹ¼����һ��ѧ���ɼ�" ;
		cin >> quit;
	}
	return 0;
}