//Geometry
#include<iostream>
#include<conio.h>
using namespace std;



void main()
{
	setlocale(LC_ALL, "rus");
	//int n, type;
	/*cout << "¬ведите вариант фигуры (1-7): "; cin >> type;
	switch (type)
	{
	case 1:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int i = 0; i < n; i++)
			{

				cout << "*";
			}
			cout << endl;
		}
		break;

	case 2:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
				cout << "*";
			cout << endl;
		}
		break;

	case 3:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = n; i > 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				cout << "*";
			}
			cout << endl;
		}
		break;

	case 4:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = n; i >= 0; i--)
		{
			for (int j = n - i; j != 0; j--)
			{
				cout << " ";
			}
			for (int f = 0; f < i; f++)
			{
				cout << "*";
			}
			cout << endl;
		}
		break;
	case 5:
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
		{
			for (int j = n - i - 1; j > 0; j--)
			{
				cout << " ";
			}
			for (int f = i; f >= 0; f--)
			{
				cout << "*";
			}
			cout << endl;
		}
	break;
	case 6:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n-1; j++) cout << " ";
			cout << "/";
			for (int j = n-i; j < n; j++) cout << "  ";
			cout << "\\" << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i ; j++) cout << " ";
			cout << "\\";
			for (int j = n-i-1; j > 0; j--) cout << "  ";
			cout << "/" << endl;
		}
	break;
	case 7:
	cout << "¬ведите размер фигуры: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = n; j!=0;j--)
			if (i % 2 == 0)
			{
				cout << "+-";
			}
			else cout << "-+";
			cout << endl;
		}
		break;
	default: cout << "ќшибка ввода - некорректное значение" << endl;
	}
	*/
int n, counter=0;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j< n; j++)
		{
			//cout << "* ";
			//if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i+j) % 2 == 0?cout << "+ ":cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << ((i + j) % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
}