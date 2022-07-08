#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 1; i <=n; i++)//счетчик вертикальный больших квадратов
	{
		if (i % 2 != 0) 
		{
			for (int j = 0; j < n;j++)//счетчик вертикальный строк в квадратах
			{
				for (int m = 1; m <= n; m++)
				{
					if (m % 2 != 0) 
					{
						for (int k = 0; k < n; k++)	cout << "* ";//счетчик горизонтальный символов
					}
					else
					{
						for (int k = 0; k < n-1; k++) cout << "  "; //-1 дл€ выравнивани€ черных квадратов
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
						for (int k = 0; k < n-1; k++)	cout << "  "; //-1 дл€ выравнивани€ черных квадратов
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