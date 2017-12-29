#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task;

	do
	{	
		cout << "������� ����� ������� - ";
		cin >> task;

		switch (task)
		{
			
#pragma region TASK1
			case 1:
			{
				cout << "���� ��� ����� ����� A � B (A < B). \n";
				cout << "����� ��� ����� �����, ������������� ����� ������� �������\n";
				cout << "(�� ������� ���� ��� �����), � ������� �� ��������, �\n";
				cout << "����� ���������� N ���� �����\n";
				int a, b, n = 0;
				do
				{
					a = 1 + rand() % 29;
					b = 1 + rand() % 29;

				} while (a > b);

				cout << "a = " << a << ", b = " << b << endl;
				for (int i = b; i > a; i--)
				{
					cout << i << endl;
					n += 1;
				} cout << "���������� ����� - " << n << endl;

			} break;
#pragma endregion

#pragma region TASK2
			case 2:
			{
				cout << "���� ����� ����� N (> 2) � ��� ������������ �����\n";
				cout << "�� �������� ���: A, B (A < B). \n";
				cout << "������� F(X) ������ �������� F(X) = 1 � sin(X).\n";
				cout << "����� �������� ������� F � N �������������� ������,\n";
				cout << "���������� ��������� ������� [A, B]: F(A), F(A + H), F(A + 2H),... , F(B).  \n";
				int n = 2 + rand() % 50, a, b, f;
				do
				{
					a = 1 + rand() % 50;
					b = 1 + rand() % 50;
					cout << "a = " << a << endl;
					cout << "b = " << b << endl;

				} while (a > b);
				for (int i = a; i <= b; i++)
				{
					f = 1 - sin(a + i);
					cout << "f = " << f << endl;
			}



			} break;
#pragma endregion

#pragma region TASK3
			case 3:
			{
				cout << "���� ����� D (> 0).\n";
				cout << "������������������ ����� AN ������������ ��������� �������: \n";
				cout << "A1 = 1, A2 = 2, AN = (AN�2+ AN�1)/2, N = 3, 4, ...\n";
				cout << "����� ������ �� ������� K, ��� ������� ����������� ������� AK- AK�1 < D, \n";
				cout << "� ������� ���� �����, � ����� ����� AK�1 � AK\n";
				int d = 1 + rand() % 50, a, n, k;
				cout << "d = " << d << endl;
				for (int k = 1; k <= d; k++)
				{	
					for (int i = 1; i <=d; i++)
					{
						a = ((k * i - 2) + (k * i - 1)) / 2;
						cout << "a = " << a << endl;
						if ((a * k) - (a * k - 1) < d)
						{
							cout << "k = " << k << endl;
						}
					}
					
				}
			} break;
#pragma endregion

#pragma region TASK4

			case 4:
			{
				cout << "������ ����������� ����� �� 10 �� N. ������� �������� ������� ���� �����" << endl;
				int n = 50 + rand() % 350;
				cout << n << endl;
				for (int i = 10; i <= n; i++)
				{
					if (i % 2 != 0 && i % 5 == 0)
					{
						cout << i << endl;
					}
				}
			} break;
#pragma endregion

#pragma region TASK5

			case 5:
			{
				cout << "������� �������� ����� �� 11 �� 99." << endl;
				for (int i = 11; i <= 99; i++)
				{
					cout << pow(i, 2) << endl;
				}
			} break;
#pragma endregion

#pragma region TASK6

			case 6:
			{
				cout << "���� ������������������ �� n ������������ �����, \n";
				cout << "������������ � �������������� �����. ����������, ����� ����������\n";
				cout << "������������� ����� �������� � ������ ������������������. \n";
				cout << "�������� �������� �� ������������\n";
				int n = -100 + rand() % - 50;
				int a = 50 + rand() % 100;
				int res = 0;
				cout << "n = " << n << ", a = " << a << endl;
				for (int i = n; i <= a; i++)
				{

					while (i < 0)
					{
						cout << i << endl;
						res++;
						break;
					}
				} cout << "���������� ������������� ����� � ������������������ = " << res << endl;
			} break;
#pragma endregion

#pragma region TASK7

			case 7:
			{
				cout << "���� ������������������ ����� ����� 1 2 18 , , ..., , a a a\n";
				cout << "� ������ ������� �������� ��������� ������ ����� ����� ���������.\n";
				cout << "���������� ���������� ����� ��������� ������������������. \n";
				cout << "�������� �������� �� ������������\n";
				int n, n1, a, res = 0;
				cout << "������� ���������� ���� � ����� - \n(��� ������ �����, ��� ������ ����������� ����������) -  ";
				cin >> a;
				for (int i = 1; i <= a; i++)
				{
					n = 1 + rand() % a;
					n1 = 1 + rand() % a;
					while (n == n1)
					{
						res++;
						cout << n << " ===== " << n1 << endl;
						break;
					}
				} cout << "���������� ������ ����� ������������������ = " << res << endl;

			} break;
#pragma endregion

#pragma region TASK8

			case 8:
			{
				cout << "�������� ������ �� ����������� ������� �� 20 �������� ������. \n";
				cout << "� ������ ������ ����������� ��� �������, ����� ��� ��������� ������. \n";
				cout << "������� �������� ����� �� ����������� ������ \"5\"?\n";
				cout << "�������� �������� �� ������������. ����������� ��� ������:\n";
				cout << "a.��������, ��� ������� ����� �� ��� ������� ������\n";
				cout << "b.�����������, ��� ������� ����� ����� ��� ������� ������\n";
				int n = 0;

				for (int i = 1; i <= 20; i++)
				{
					int marks = 2 + rand() % 4;
					while (marks == 5)
					{
						n += 1;
						cout << "������ � " << i << " - " << marks << endl;
						break;
					}
					while (marks != 5)
					{
						cout << "������ � " << i << " - " << marks << endl;
						break;
					}
				} cout << "������� ����� " << n << " ��������\n";

			} break;
#pragma endregion

#pragma region TASK9
			case 9:
			{
				cout << "�������� �������� � ���������� �������, �������� �� ������ ���� ���.\n";
				cout << "������� ��� ������� �� ����. ����������, � ������� ������ ����������\n";
				cout << "������ ���� ������ ����������, ������� � ������� ���, ������� �� ����? \n";
				cout << "�������� �������� �� ������������. ����������� ��� ������:\n";
				cout << "a.��������, ��� � ����� - �� ��� ��� ������ ��������\n";
				cout << "b.�����������, ��� ������� ����� �� ���� �� � ����� ���� ���\n";
				bool a;
				int n = 0;
				for (int i = 1; i <=30; i++)
				{
					a = 0 + rand() % 2;
					cout << a << endl;
					while (a == 0)
					{
						n += 1;
						break;
					}
				} cout << "����� �� ��� " << n << " ����" << endl;
			} break;
#pragma endregion

		}

	} while (task < 9);



	system("pause");
}