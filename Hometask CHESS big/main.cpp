#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �����: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 1; i <=n; i++)//������� ������������ ������� ���������
	{
		if (i % 2 != 0) 
		{
			for (int j = 0; j < n;j++)//������� ������������ ����� � ���������
			{
				for (int m = 1; m <= n; m++)
				{
					if (m % 2 != 0) 
					{
						for (int k = 0; k < n; k++)	cout << "* ";//������� �������������� ��������
					}
					else
					{
						for (int k = 0; k < n-1; k++) cout << "  "; //-1 ��� ������������ ������ ���������
					}
				}
					cout << endl;
			}
		}
		else {
			for (int j = 0; j < n; j++)
			{
				for (int m = 1; m <= n; m++)
				{
					if (m % 2 != 0) 
					{ 
						for (int k = 0; k < n-1; k++)	cout << "  "; //-1 ��� ������������ ������ ���������
					}
					else 
					{ 
						for (int k = 0; k < n; k++) cout << " *"; 
					}

				}
					cout << endl;
			}
		}
	}

}